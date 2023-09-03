#ifndef AULA_VIEW_H
#define AULA_VIEW_H

#include <QObject>
#include <QWidget>
#include <QCloseEvent>
#include <QTableWidget>
#include "Model/contenitore.h"
#include "Model/aula.h"
#include "view.h"
class Aula_View: public View
{
    Q_OBJECT    
protected:
    explicit Aula_View(const QSize&, View* );

public:
    void closeEvent(QCloseEvent *) override;
    virtual void createTable(const QStringList&)=0;
    virtual void carica_view(const contenitore<aula*>&)=0;
    virtual void addToView(aula*)=0;
   virtual  void rimuovi_aula(uint)=0;

signals:
    void viewClosed() const; //close_signal to controller
};

#endif // AULA_VIEW_H
