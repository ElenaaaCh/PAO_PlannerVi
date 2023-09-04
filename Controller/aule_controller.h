#ifndef AULE_CONTROLLER_H
#define AULE_CONTROLLER_H

#include <QObject>
#include "controller.h"
#include "Model/storage.h"
#include "View/aula_view.h"
#include "View/aulaconcerto_view.h"
#include "View/aulastrumentale_view.h"
#include "View/aulastudio_view.h"

class aule_controller: Controller
{
    Q_OBJECT
protected:
    explicit aule_controller();
public:
    explicit aule_controller(storage*, Aula_View*, Aula_View*, Aula_View*, Controller* = nullptr);
    storage* getModel() const override;
    Aula_View* getView() const override;
public slots:

};

#endif // AULE_CONTROLLER_H
