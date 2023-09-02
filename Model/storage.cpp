#include "storage.h"
#include "contenitore.h"

storage::storage(){
    aule_concerto=contenitore<aula*>();
    aule_studio=contenitore<aula*>();
    aule_strumentali=contenitore<aula*>();
    prenotazioni=contenitore<prenotazione*>();
}

storage::storage(QJsonDocument* document): aule_concerto(contenitore<aula*>()), aule_studio(contenitore<aula*>()), aule_strumentali(contenitore<aula*>()), prenotazioni(contenitore<prenotazione*>()){
    QJsonObject JObject = document->object();

    QJsonArray JArray_aC = JObject["aule"].toArray();
    QJsonValue type = object.value("type");

    if (type.toString().compare("aula_concerto") == 0){
        for (auto i: JArray_aC){
            aulaConcerto* au= new aulaConcerto(i.toObject().value("Piano").toInt(),
                                                i.toObject().value("Numero").toInt(),
                                    i.toObject().value("Sede").toString().toStdString(),
                                    i.toObject().value("Persone").toInt(),
                                    i.toObject().value("Nome").toString().toStdString(),
                                    i.toObject().value("Strumento").toString().toStdString(),
                                    i.toObject().value("Capienza").toInt(),
                                    i.toObject().value("Amplificazione").toBool());
            aule_concerto.push(au);
        }
    }
    else if (type.toString().compare("aula_studio") == 0){
        for (auto i: JArray_aS){
            aulaStudio* au= new aulaStudio(i.toObject().value("Piano").toInt(),
                                                i.toObject().value("Numero").toInt(),
                                                i.toObject().value("Sede").toString().toStdString(),
                                                i.toObject().value("Persone").toInt(),
                                                i.toObject().value("Leggii").toInt(),
                                                i.toObject().value("Prese").toInt());
            aule_studio.push(au);
        }
    }
    else if (type.toString().compare("aula_strumentale") == 0){
        for (auto i: JArray_aStr){
            aulaStrumentale* au= new aulaStrumentale(i.toObject().value("Piano").toInt(),
                                                i.toObject().value("Numero").toInt(),
                                                i.toObject().value("Sede").toString().toStdString(),
                                                i.toObject().value("Persone").toInt(),
                                                i.toObject().value("Strumento").toString().toStdString());
            aule_strumentali.push(au);
        }
    }


    QJsonArray JArray_pren = JObject["prenotazioni"].toArray();
    for (auto i: JArray_pren){

        prenotazione* pren= new prenotazione(i.toObject().value("Persona").toString().toStdString(),
                                            QDate::fromString(i.toObject().value("Data").toString(),"dd/MM/yyyy"),
                                            QTime::fromString(i.toObject().value("OraArrivo").toString(),"hh:mm"),
                                            QTime::fromString(i.toObject().value("OraUscita").toString(),"hh:mm"),
                                            i.toObject().value("Causale").toString().toStdString(),
                                            i.toObject().value("Aula").toInt());
        prenotazioni.push(pren);
    }

    QJsonArray JArray_ut = JObject["utenti"].toArray();
    for (auto i: JArray_ut){
        utente* ut= new utente(i.toObject().value("Nome").toString().toStdString(),
                                i.toObject().value("Cognome").toString().toStdString(),
                                i.toObject().value("CodFiscale").toString().toStdString(),
                                i.toObject().value("Telefono").toString().toStdString(),
                                i.toObject().value("Email").toString().toStdString(),
                                i.toObject().value("Ruolo").toString().toStdString(),
                                i.toObject().value("Password").toString().toStdString());
        pers.push_back(ut);
    }
}

const contenitore<aula*>& storage::getContAula() const{
    return aule_concerto;
}
const contenitore<prenotazione*>& storage::getContPren() const{
    return prenotazioni;
}
const vector<utente*>& storage::getUtente() const{
    return pers;
}

storage::storage(contenitore<aula*>& aule_iniziali, contenitore<prenotazione*>& prenotazioni_iniziali, vector<utente*>& utenti_iniziali) {
    // Aggiungi le aule iniziali al contenitore delle aule
    for (auto aula : aule_iniziali) {
        aule.push(aula);
    }

    // Aggiungi le prenotazioni iniziali al contenitore delle prenotazioni
    for (auto prenotazione : prenotazioni_iniziali) {
        prenotazioni.push(prenotazione);
    }

    // Assegna il vettore degli utenti iniziali
    pers = utenti_iniziali;
}


storage::~storage() {
    // Dealloca le aule nel contenitore delle aule
    for (auto aula : aule) {
        delete aula;
    }

    // Dealloca le prenotazioni nel contenitore delle prenotazioni
    for (auto prenotazione : prenotazioni) {
        delete prenotazione;
    }

    // Dealloca gli utenti nel vettore degli utenti
    for (auto utente : pers) {
        delete utente;
    }
    saveJsonData();
}

void storage::addAula(aula* a) {
    aule.insertSorted(a, [](const aula* a1, const aula* a2) {
        if (a1->getPiano() < a2->getPiano()) {
            return true;
        } else if (a1->getPiano() == a2->getPiano()) {
            return a1->getNumero() < a2->getNumero();
        } else {
            return false;
        }
    });
}

void storage::removeAula(aula* aulaToRemove) {
    aule.remove(aulaToRemove);
}

void storage::addPrenotazione(prenotazione* pr) {
    prenotazioni.insertSorted(pr, [](const prenotazione* a, const prenotazione* b) {
        return a->getData() < b->getData() && a->getAula() < b->getAula() && a->getOraArrivo() < b->getOraArrivo();
    });

    addPrenotazioneToJSON(pr);
}

void storage::removePrenotazione(uint i) {
    prenotazioni.remove(i);
    removePrenotazioneFromJSON(i);
}

void storage::addUtente(utente* ut){
    pers.push_back(ut);
}

void storage::addPrenotazioneToJSON(prenotazione* pr){
    QJsonObject nuovaPrenotazione;
    nuovaPrenotazione["Persona"] = QString::fromStdString(pr->getPersona());
    nuovaPrenotazione["Data"] = pr->getData().toString("dd/MM/yyyy");
    nuovaPrenotazione["OraArrivo"] = pr->getOraArrivo().toString("hh:mm");
    nuovaPrenotazione["OraUscita"] = pr->getOraUscita().toString("hh:mm");
    nuovaPrenotazione["Causale"] = QString::fromStdString(pr->getCausale());
    nuovaPrenotazione["Aula"] = pr->getAula();

    QJsonArray prenotazioniArray = jsonDocument->object()["prenotazioni"].toArray();
    prenotazioniArray.append(nuovaPrenotazione);
    jsonDocument->object()["prenotazioni"] = prenotazioniArray;

    saveJsonData();
}

void storage::removePrenotazioneFromJSON(uint i) {
    QJsonArray prenotazioniArray = jsonDocument->object()["prenotazioni"].toArray();
    prenotazioniArray.removeAt(i);
    jsonDocument->object()["prenotazioni"] = prenotazioniArray;

    saveJsonData();
}

void storage::saveJsonData() const {
    QFile file(":/file.json");
    file.write(jsonDocument->toJson());
    file.close();
}

