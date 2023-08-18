#include "ConcreteAulaVisitor.h"

void ConcreteAulaVisitor::visit(const aulaConcerto& aC) {
    renderedInfo = "Tipo: Aula Concerto\n";
    renderedInfo += "Nome: " + QString::fromStdString(aC.getNome()) + "\n";
    renderedInfo += "Strumento: " + QString::fromStdString(aC.getStrumento()) + "\n";
    renderedInfo += "Capienza: " + QString::number(aC.getCapienza()) + "\n";
}

void ConcreteAulaVisitor::visit(const aulaStrumentale& aStr) {
    renderedInfo = "Tipo: Aula Strumentale\n";
    renderedInfo += "Strumento: " + QString::fromStdString(aStr.getStrumento()) + "\n";
}

void ConcreteAulaVisitor::visit(const aulaStudio& aS) {
    renderedInfo = "Tipo: Aula Studio\n";
    renderedInfo += "Leggii: " + QString::number(aS.getLeggii()) + "\n";
}

QString ConcreteAulaVisitor::getRenderedInfo() const {
    return renderedInfo;
}
