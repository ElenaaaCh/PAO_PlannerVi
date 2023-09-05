#ifndef AULA_CONTROLLER_H
#define AULA_CONTROLLER_H

#include <QObject>
#include "controller.h"
#include "View/aula_view.h"
#include "Model/storage.h"

class aula_controller: public Controller
{
    Q_OBJECT
protected:
    explicit aula_controller();

public:
    explicit aula_controller(storage*, Aula_View*, Controller* = nullptr);
    storage* getModel() const override;
    Aula_View* getView() const override;

public slots:
    void onViewClosed() const override;
    void aggiungi_enter_c(const int&, const int&, const QString&, const int&, const QString&,const QString&, const int&, const bool&) const;
    void rimuovi_enter(uint i);
};

#endif // AULA_CONTROLLER_H
