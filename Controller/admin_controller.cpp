#include "admin_controller.h"

AdminController::AdminController(){}

AdminController::AdminController(storage* s, admin_view * a, Controller* c) : Controller(s, a, c){
    view->setTitolo("VISUALIZZAZIONE ADMIN");
    connect(view,SIGNAL(View_concerto_signal()),this,SLOT(concerto_enter()));
    connect(view,SIGNAL(View_str_signal()),this,SLOT(str_enter()));
    connect(view,SIGNAL(View_studio_signal()),this,SLOT(studio_enter()));
    connect(view,SIGNAL(salva_signal()),this,SLOT(addToJson()));
}

void AdminController::concerto_enter() const {
    Aula_View* aW_c = new aulaConcerto_view(QSize(900,400),view);
    aula_controller* ac= new aula_controller (getModel(), aW_c, const_cast<AdminController*>(this));
    ac->getView()->createTable();

    contenitore<aula*> c = getModel()->getContAula1();
    ac->getView()->carica_view(c);
    hide();
    ac->show();
}

void AdminController::str_enter() const {
    Aula_View* aW_s = new aulaStrumentale_view(QSize(900,400),view);
    aula_controller* ac= new aula_controller (getModel(), aW_s, const_cast<AdminController*>(this));
    ac->getView()->createTable();
    contenitore<aula*> c = getModel()->getContAula2();
    ac->getView()->carica_view(c);
    hide();
    ac->show();
}

void AdminController::studio_enter() const {
    Aula_View* aW_st = new aulaStudio_view(QSize(900,400),view);
    aula_controller* ac= new aula_controller (getModel(), aW_st, const_cast<AdminController*>(this));
    ac->getView()->createTable();
    contenitore<aula*> c = getModel()->getContAula3();
    ac->getView()->carica_view(c);
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

void AdminController::addToJson() const{
    if(! getModel()->getContAula1().size()){
        view->showError("Errore","Nessun elemento da salvare");
        return;
    }
    QJsonDocument* docJson =new QJsonDocument();
    QJsonObject container;
    QJsonArray arrayJson1;
    QJsonArray arrayJson2;
    QJsonArray arrayJson3;

    for(auto j: getModel()->getContAula1()){
        aulaConcerto* i=static_cast<aulaConcerto*>(j);
        QJsonObject obj;
        obj.insert(QString::fromStdString("Piano"),static_cast<int>(i->getPiano()));
        obj.insert(QString::fromStdString("Numero"),static_cast<int>(i->getNumero()));
        obj.insert(QString::fromStdString("Sede"), QString::fromStdString(i->getSede()));
        obj.insert(QString::fromStdString("Persone"),static_cast<int>(i->getMaxPersone()));
        obj.insert(QString::fromStdString("Nome"),QString::fromStdString(i->getNome()));
        obj.insert(QString::fromStdString("Strumento"), QString::fromStdString(i->getStrumento()));
        obj.insert(QString::fromStdString("Capienza"),static_cast<int>(i->getCapienza()));
        obj.insert(QString::fromStdString("Amplificazione"),static_cast<bool>(i->getAmplificazione()));
        arrayJson1.push_back(obj);
    }
    for(auto j: getModel()->getContAula2()){
        aulaStrumentale* i=static_cast<aulaStrumentale*>(j);
        QJsonObject obj;
        obj.insert(QString::fromStdString("Piano"),static_cast<int>(i->getPiano()));
        obj.insert(QString::fromStdString("Numero"),static_cast<int>(i->getNumero()));
        obj.insert(QString::fromStdString("Sede"), QString::fromStdString(i->getSede()));
        obj.insert(QString::fromStdString("Persone"),static_cast<int>(i->getMaxPersone()));
        obj.insert(QString::fromStdString("Strumento"), QString::fromStdString(i->getStrumento()));
        arrayJson2.push_back(obj);
    }
    for(auto j: getModel()->getContAula3()){
        aulaStudio* i=static_cast<aulaStudio*>(j);
        QJsonObject obj;
        obj.insert(QString::fromStdString("Piano"),static_cast<int>(i->getPiano()));
        obj.insert(QString::fromStdString("Numero"),static_cast<int>(i->getNumero()));
        obj.insert(QString::fromStdString("Sede"), QString::fromStdString(i->getSede()));
        obj.insert(QString::fromStdString("Persone"),static_cast<int>(i->getMaxPersone()));
        obj.insert(QString::fromStdString("Leggii"),static_cast<int>(i->getLeggii()));
        obj.insert(QString::fromStdString("Prese"),static_cast<int>(i->getPreseCorrente()));
        arrayJson3.push_back(obj);
    }

    container.insert(QString::fromStdString("aule_concerto"),arrayJson1);
    container.insert(QString::fromStdString("aule_strumentali"),arrayJson2);
    container.insert(QString::fromStdString("aule_studio"),arrayJson3);

    docJson->setObject(container);
    QString nome = QFileDialog::getSaveFileName(view,QObject::tr("Salva con nome"), QString::fromStdString(getModel()->getPath()),"JSON Files (*.json)");
    if(nome.isEmpty() || nome.isNull()){
        view->showError(QObject::tr("Errore di salvataggio"),QObject::tr("Nome non valido"));
        return;
    }
    if (!nome.endsWith(".json"))
        nome+= QObject::tr(".json");

    getModel()->setPath(nome);
    if(salvataggio_dati::SalvaModel(*docJson,nome))
        view->showMessage(QObject::tr("Salvataggio"),QObject::tr("Salvataggio riuscito"));
    else
        view->showError(QObject::tr("Errore di salvataggio"),QObject::tr("Impossibile salvare"));
    delete docJson;

}
