#include "aule_controller.h"

aule_controller::aule_controller(storage* s, admin_view* a, Aula_View* ac, Aula_View* as, Aula_View* astr, Controller* c): Controller(s,a,c), view1(ac), view2(as), view3(astr)
{
    ac->carica_view(s->getContAula1());//NON CARICA A PRESCINDERE

    //getView()->carica_pren(s->getContPren());
    //connect(view,SIGNAL(aggiugi_signal(const int&, const QDate&, const QTime&, const QTime&, const QString&, const QString&)),this,SLOT(aggiungi_enter(const int&, const QDate&, const QTime&, const QTime&, const QString&, const QString&)));
    //connect(view,SIGNAL(rimuovi_signal(uint)),this,SLOT(rimuovi_enter(uint)));
    //connect(view,SIGNAL(indietro_signal()),this,SLOT(indietro_enter()));
}

storage* aule_controller::getModel()const {
    return static_cast<storage*>(mod);
}

Aula_View* aule_controller::getView() const{
    return static_cast<Aula_View*>(view) ;
}

void aule_controller::onViewClosed() const {
    //delete this;
}

void aule_controller::show() const {
    view1->show();
    view2->show();
    view3->show();
}
