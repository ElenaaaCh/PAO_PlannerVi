#include "aule_controller.h"

aule_controller::aule_controller()
{

}

storage* aule_controller::getModel()const {
    return static_cast<storage*>(mod);
}

Aula_View* aule_controller::getView() const{
    return static_cast<Aula_View*>(view) ;
}
