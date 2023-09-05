#include "aula_controller.h"

aula_controller::aula_controller(){}

aula_controller::aula_controller(storage* s, Aula_View * a, Controller* c) : Controller(s, a, c)
{
    connect(view,SIGNAL(aggiugi_signal_c(const int&, const int&, const QString&, const int&, const QString&,const QString&, const int&, const bool&)),this,SLOT(aggiungi_enter_c(const int&, const int&, const QString&, const int&, const QString&,const QString&, const int&, const bool&)));
    connect(view,SIGNAL(rimuovi_signal(uint)),this,SLOT(rimuovi_enter(uint)));
    connect(view,SIGNAL(viewClosed()),this, SLOT(onViewClosed()));
}

void aula_controller::aggiungi_enter_c(const int& piano, const int& numero, const QString& sede, const int& pers, const QString& nome, const QString& strum, const int& cap, const bool& ampl) const {
    string _sede=sede.toStdString();
    string _nome=nome.toStdString();
    string _strum=strum.toStdString();

    //mettere in ordine
    aulaConcerto* nuova = new aulaConcerto(piano,numero,_sede,pers,_nome,_strum,cap,ampl);
    getModel()->addAula_Concerto(nuova);
    getView()->addToView(nuova);
}

void aula_controller::rimuovi_enter(uint i){ //C'è UN MODO PER FARNE UNO UNICO PER TUTTE LE AULE?
    //getModel()->removeAulaConcerto(); //remove vuole un tipo aulaConcerto*
}

storage* aula_controller::getModel()const {
    return static_cast<storage*>(mod);
}

Aula_View* aula_controller::getView() const{
    return static_cast<Aula_View*>(view) ;
}

void aula_controller::onViewClosed() const {
    if(view->parent()){
        hide();
        static_cast<View*>(view->parent())->show();

        //delete this;
    }
}
