#include "admin_controller.h"

AdminController::AdminController(){}

AdminController::AdminController(storage* s, admin_view * a, Controller* c) : Controller(s, a, c){
    view->setTitolo("VISUALIZZAZIONE ADMIN");
    connect(view,SIGNAL(View_concerto_signal()),this,SLOT(concerto_enter()));
    connect(view,SIGNAL(View_str_signal()),this,SLOT(str_enter()));
    connect(view,SIGNAL(View_studio_signal()),this,SLOT(studio_enter()));
}

void AdminController::concerto_enter() const {
    Aula_View* aW_c = new aulaConcerto_view(QSize(400,500),view);
    aula_controller* ac= new aula_controller (getModel(), aW_c, const_cast<AdminController*>(this));
    ac->getView()->createTable();

    contenitore<aula*> c = getModel()->getContAula1();
    ac->getView()->carica_view(c);
    hide();
    ac->show();
}

void AdminController::str_enter() const {
    Aula_View* aW_s = new aulaStrumentale_view(QSize(400,500),view);
    aula_controller* ac= new aula_controller (getModel(), aW_s, const_cast<AdminController*>(this));
    ac->getView()->createTable();
    hide();
    ac->show();
}

void AdminController::studio_enter() const {
    Aula_View* aW_st = new aulaStudio_view(QSize(400,500),view);
    aula_controller* ac= new aula_controller (getModel(), aW_st, const_cast<AdminController*>(this));
    ac->getView()->createTable();
    hide();
    ac->show();
}


storage* AdminController::getModel()const {
    return static_cast<storage*>(mod);
}

admin_view* AdminController::getView() const{
    return static_cast<admin_view*>(view) ;
}

void AdminController::onViewClosed() const {
    delete this;
}
