#ifndef STORAGE_H
#define STORAGE_H

#include<iostream>
#include<vector>
#include<string>
#include<QString>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonArray>
#include<QFile>
#include "contenitore.h"
#include "aula.h"
#include "prenotazione.h"
#include "utente.h"
#include "model.h"

using std::string;
using std::vector;


class storage: public Model{
private:
    contenitore<aula*> aule_concerto;
    contenitore<aula*> aule_studio;
    contenitore<aula*> aule_strumentali;
    contenitore<prenotazione*> prenotazioni;
    vector<utente*> pers;
    QJsonDocument* jsonDocument;

public:
    explicit storage();
    explicit storage(contenitore<aula*>& , contenitore<aula*>& , contenitore<aula*>& , contenitore<prenotazione*>& , vector<utente*>& );//costr
    explicit storage(QJsonDocument*);
    virtual ~storage();//distr

    const contenitore<aula*>& getContAula() const;
    const contenitore<prenotazione*>& getContPren() const;
    const vector<utente*>& getUtente() const;

    void addAula(aula* aula);
    void removeAula(aula* aula);
    aula* searchAula(const int piano, const int numero);

    void addPrenotazione(prenotazione* pr);
    void removePrenotazione(uint i);
    prenotazione* searchPrenotazione(const QDate& data, const aula* aulaRiferimento);

    void addUtente(utente* ut);
    void removeUtente(const string& nome, const string& cognome);
    void modifyUtente(const string& nome, const string& cognome, const string& nuovoTelefono, const string& nuovaEmail);

    void addPrenotazioneToJSON(prenotazione* pr);
    void removePrenotazioneFromJSON(uint i);
    void saveJsonData() const;
};


#endif // STORAGE_H
