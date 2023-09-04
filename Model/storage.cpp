#include "storage.h"
#include "contenitore.h"

storage::storage(){
    aule_concerto=contenitore<aula*>();
    aule_studio=contenitore<aula*>();
    aule_strumentali=contenitore<aula*>();
    prenotazioni=contenitore<prenotazione*>();
    pers=std::vector<utente*>();
}

storage::storage(QJsonDocument* document, string& path ): aule_concerto(contenitore<aula*>()), aule_studio(contenitore<aula*>()), aule_strumentali(contenitore<aula*>()), prenotazioni(contenitore<prenotazione*>()), pers(std::vector<utente*>()){
    filepath=path;
    QJsonObject JObject = document->object();

    QJsonArray JArray_aC = JObject["aule_concerto"].toArray();
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
        QJsonArray JArray_aS = JObject["aule_studio"].toArray();
        for (auto i: JArray_aS){
            aulaStudio* au= new aulaStudio(i.toObject().value("Piano").toInt(),
                                                i.toObject().value("Numero").toInt(),
                                                i.toObject().value("Sede").toString().toStdString(),
                                                i.toObject().value("Persone").toInt(),
                                                i.toObject().value("Leggii").toInt(),
                                                i.toObject().value("Prese").toInt());
            aule_studio.push(au);
        }
        QJsonArray JArray_aStr = JObject["aule_strumentale"].toArray();
        for (auto i: JArray_aStr){
            aulaStrumentale* au= new aulaStrumentale(i.toObject().value("Piano").toInt(),
                                                i.toObject().value("Numero").toInt(),
                                                i.toObject().value("Sede").toString().toStdString(),
                                                i.toObject().value("Persone").toInt(),
                                                i.toObject().value("Strumento").toString().toStdString());
            aule_strumentali.push(au);
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

const contenitore<aula*>& storage::getContAula1() const{
    return aule_concerto;
}
const contenitore<aula*>& storage::getContAula2() const{
    return aule_strumentali;
}
const contenitore<aula*>& storage::getContAula3() const{
    return aule_studio;
}
const contenitore<prenotazione*>& storage::getContPren() const{
    return prenotazioni;
}
const vector<utente*>& storage::getUtente() const{
    return pers;
}



storage::~storage() {
    // Dealloca le aule nel contenitore delle aule
    for (auto aula1 : aule_concerto) {
        delete aula1;
    }
    for (auto aula2 : aule_studio) {
        delete aula2;
    }
    for(auto aula3: aule_strumentali){
        delete aula3;
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

void storage::addAula_Strumentale(aulaStrumentale* a) {
    aule_strumentali.insertSorted(a, [](const aula* a1, const aula* a2) {
        if (a1->getPiano() < a2->getPiano()) {
            return true;
        } else if (a1->getPiano() == a2->getPiano()) {
            return a1->getNumero() < a2->getNumero();
        } else {
            return false;
        }
    });
}
void storage::addAula_Studio(aulaStudio* a){
    aule_studio.insertSorted(a, [](const aula* a1, const aula* a2) {
        if (a1->getPiano() < a2->getPiano()) {
            return true;
        } else if (a1->getPiano() == a2->getPiano()) {
            return a1->getNumero() < a2->getNumero();
        } else {
            return false;
        }
    });
}
void storage::addAula_Concerto(aulaConcerto* a){
    aule_concerto.insertSorted(a, [](const aula* a1, const aula* a2) {
        if (a1->getPiano() < a2->getPiano()) {
            return true;
        } else if (a1->getPiano() == a2->getPiano()) {
            return a1->getNumero() < a2->getNumero();
        } else {
            return false;
        }
    });
}
void storage::removeAulaStrumentale(aulaStrumentale* aulaToRemove) {
    aule_strumentali.remove(aulaToRemove);
}
void storage::removeAulaStudio(aulaStudio* aulaToRemove) {
    aule_studio.remove(aulaToRemove);
}
void storage::removeAulaConcerto(aulaConcerto* aulaToRemove) {
    aule_concerto.remove(aulaToRemove);
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

