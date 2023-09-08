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
#include "aulaConcerto.h"
#include "aulaStrumentale.h"
#include "aulaStudio.h"

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
    string filepath;

public:
    explicit storage();
    explicit storage(contenitore<aula*>& , contenitore<aula*>& , contenitore<aula*>& , contenitore<prenotazione*>& , vector<utente*>& );//costr
    explicit storage(QJsonDocument*, const string& );
    virtual ~storage();//distr

    const contenitore<aula*>& getContAula1() const;
    const contenitore<aula*>& getContAula2() const;
    const contenitore<aula*>& getContAula3() const;
    const contenitore<prenotazione*>& getContPren() const;
    const vector<utente*>& getUtente() const;

    //METODI DI AGGIUNTA
    void addAula_Concerto(aulaConcerto*);
    void addAula_Strumentale(aulaStrumentale*);
    void addAula_Studio(aulaStudio*);
    void addPrenotazione(prenotazione* pr);
    void addUtente(utente* ut);

    //METODI DI RIMOZIONE
    void removeAulaConcerto(uint);
    void removeAulaStrumentale(uint);
    void removeAulaStudio(uint);
    void removePrenotazione(uint i);
    void removeUtente(const string& nome, const string& cognome);

    const string& getPath() const;
    void setPath(const QString&);
    //aula* searchAula(const int piano, const int numero);
    //prenotazione* searchPrenotazione(const QDate& data, const aula* aulaRiferimento);
    //void modifyUtente(const string& nome, const string& cognome, const string& nuovoTelefono, const string& nuovaEmail);

};


#endif // STORAGE_H
