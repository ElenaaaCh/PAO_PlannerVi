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
    virtual void createTable()=0;
    virtual void carica_view(const contenitore<aula*>&)=0;
    virtual void addToView(aula*)=0;
   virtual  void rimuovi_aula(uint)=0;

signals:
    void rimuovi_signal_studio(uint) const;
    void aggiungi_signal_s(const int&, const int&, const QString&, const int&, const int&, const int&);
    void aggiungi_signal_c(const int&, const int&, const QString&, const int&, const QString&,const QString&, const int&, const bool&);
    void rimuovi_signal_concerto(uint) const;
    void rimuovi_signal_strumentale(uint) const;
    void aggiungi_signal_str(const int&, const int&, const QString&, const int&, const QString&);
};

#endif // AULA_VIEW_H
