#include "aula_controller.h"

aula_controller::aula_controller(){}

aula_controller::aula_controller(storage* s, Aula_View * a, Controller* c) : Controller(s, a, c)
{
    connect(view,SIGNAL(aggiungi_signal_c(const int&, const int&, const QString&, const int&, const QString&,const QString&, const int&, const bool&)),this,SLOT(aggiungi_concerto(const int&, const int&, const QString&, const int&, const QString&,const QString&, const int&, const bool&)));
    connect(view,SIGNAL(aggiungi_signal_str(const int&, const int&, const QString&, const int&, const QString&)),this,SLOT(aggiungi_strum(const int&, const int&, const QString&, const int&, const QString&)));
    connect(view,SIGNAL(aggiungi_signal_s(const int&, const int&, const QString&, const int&, const int&, const int&)),this,SLOT(aggiungi_studio(const int&, const int&, const QString&, const int&, const int&, const int&)));

    connect(view,SIGNAL(rimuovi_signal_concerto(uint)),this,SLOT(rimuovi_concerto(uint)));
    connect(view,SIGNAL(rimuovi_signal_strumentale(uint)),this,SLOT(rimuovi_str(uint)));
    connect(view,SIGNAL(rimuovi_signal_studio(uint)),this,SLOT(rimuovi_studio(uint)));
    connect(view,SIGNAL(viewClosed()),this, SLOT(onViewClosed()));
}

void aula_controller::aggiungi_concerto(const int& piano, const int& numero, const QString& sede, const int& pers, const QString& nome, const QString& strum, const int& cap, const bool& ampl) const {
    string _sede=sede.toStdString();
    string _nome=nome.toStdString();
    string _strum=strum.toStdString();

    aulaConcerto* nuova = new aulaConcerto(piano,numero,_sede,pers,_nome,_strum,cap,ampl);
    getModel()->addAula_Concerto(nuova);
    getView()->addToView(nuova);
}

void aula_controller::aggiungi_strum(const int& piano, const int& numero, const QString& sede, const int& pers, const QString& strum) const {
    string _sede=sede.toStdString();
    string _strum=strum.toStdString();

    aulaStrumentale* nuova = new aulaStrumentale(piano,numero,_sede,pers,_strum);
    getModel()->addAula_Strumentale(nuova);
    getView()->addToView(nuova);
}

void aula_controller::aggiungi_studio(const int& piano, const int& numero, const QString& sede, const int& pers, const int& lg, const int& pr) const {
    string _sede=sede.toStdString();

    aulaStudio* nuova = new aulaStudio(piano,numero,_sede,pers,lg,pr);
    getModel()->addAula_Studio(nuova);
    getView()->addToView(nuova);
}

void aula_controller::rimuovi_concerto(uint i){
    getModel()->removeAulaConcerto(i);
    static_cast<aulaConcerto_view*>(getView())->chiudi(i);
}

void aula_controller::rimuovi_str(uint i){
    getModel()->removeAulaConcerto(i);
    static_cast<aulaStrumentale_view*>(getView())->chiudi(i);
}

void aula_controller::rimuovi_studio(uint i){
    getModel()->removeAulaConcerto(i);
    static_cast<aulaStudio_view*>(getView())->chiudi(i);
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
    }
    //delete this;
}
