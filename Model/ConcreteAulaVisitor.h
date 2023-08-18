#ifndef CONCRETEAULAVISITOR_H
#define CONCRETEAULAVISITOR_H


#include "aulaConcerto.h"
#include "aulaStrumentale.h"
#include "aulaStudio.h"
#include "AulaVisitor.h"
#include <QString>

class ConcreteAulaVisitor : public AulaVisitor {
private:
    QString renderedInfo;

public:
    void visit(const aulaConcerto& aC) override;
    void visit(const aulaStrumentale& aStr) override;
    void visit(const aulaStudio& aS) override;

    QString getRenderedInfo() const;
};

#endif // CONCRETEAULAVISITOR_H
