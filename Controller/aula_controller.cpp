#include "aula_controller.h"

aula_controller::aula_controller(){}

aula_controller::aula_controller(storage* s, Aula_View * a, Controller* c) : Controller(s, a, c)
{
    connect(view,SIGNAL(viewClosed()),this, SLOT(onViewClosed()));
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
