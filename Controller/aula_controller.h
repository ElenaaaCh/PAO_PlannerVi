#ifndef AULA_CONTROLLER_H
#define AULA_CONTROLLER_H

#include <QObject>
#include "controller.h"
#include "View/aula_view.h"
#include "View/aulaconcerto_view.h"
#include "View/aulastrumentale_view.h"
#include "View/aulastudio_view.h"
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
    void aggiungi_concerto(const int&, const int&, const QString&, const int&, const QString&,const QString&, const int&, const bool&) const;
    void aggiungi_strum(const int&, const int&, const QString&, const int&, const QString&) const;
    void aggiungi_studio(const int&, const int&, const QString&, const int&, const int&, const int&) const;
    void rimuovi_concerto(uint i);
    void rimuovi_str(uint i);
    void rimuovi_studio(uint i);
};

#endif // AULA_CONTROLLER_H
