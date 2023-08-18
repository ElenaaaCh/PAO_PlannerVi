#ifndef AULAVISITOR_H
#define AULAVISITOR_H

#pragma once

class aulaConcerto;
class aulaStrumentale;
class aulaStudio;

class AulaVisitor {
public:
    virtual void visit(const aulaConcerto& aC) = 0;
    virtual void visit(const aulaStrumentale& aStr) = 0;
    virtual void visit(const aulaStudio& aS) = 0;
};


#endif // AULAVISITOR_H
