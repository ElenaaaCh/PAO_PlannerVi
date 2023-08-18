#ifndef LISTA_AULE_H
#define LISTA_AULE_H

#include "../Model/aula.h"
#include "../Model/aulaConcerto.h"
#include "../Model/aulaStrumentale.h"
#include "../Model/aulaStudio.h"
#include "admin_view.h"
#include "Model/AulaVisitor.h"

class lista_aule: public AulaVisitor{
private:
    QWidget* widget;
    QPushButton* viewButton;
    QPushButton* editButton;
    QPushButton* deleteButton;
public:
    lista_aule();
    virtual void visit(const aulaConcerto& aC);
    virtual void visit(const aulaStrumentale& aStr);
    virtual void visit(const aulaStudio& aS);

    virtual QWidget* getWidget() const;
    virtual QPushButton* getViewButton() const;
    virtual QPushButton* getEditButton() const;
    virtual QPushButton* getDeleteButton() const;
    virtual void render(QGridLayout* grid, QVector<WidgetLookup>* lookup);

    void renderAula(const aula& a, AulaVisitor& visitor);
};

#endif // LISTA_AULE_H
