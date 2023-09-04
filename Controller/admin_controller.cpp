#include "admin_controller.h"

AdminController::AdminController(){}

AdminController::AdminController(storage* s, admin_view * a, Aula_View* aw, Controller* c) : Controller(s, a, c){
    view->setTitolo("VISUALIZZAZIONE ADMIN");
    connect(aw,SIGNAL(prova_signal()),this,SLOT(prova()));
    /*
    getView()->create_table({"Numero Aula","Data","Ora Arrivo", "Ora Uscita", "Causale", "Email utente","Rimuovi","Aggiungi"});
    getView()->visualizza_prenotazioni(s->getContPren());
    connect(view,SIGNAL(rimuovi_signal(uint)),this,SLOT(rimuovi_enter(uint)));
    connect(view,SIGNAL(elimina_signal(uint)),this,SLOT(rimuovi_enter(uint)));
    connect(view,SIGNAL(aggiugi_signal(const int, const QDate, const QTime, const QTime, const QString, const QString)),this,SLOT(aggiungi_enter(const int, const QDate, const QTime, const QTime, const QString, const QString)));
*/
}

void AdminController::prova() const {
    qDebug()<<"segnale prova";
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
