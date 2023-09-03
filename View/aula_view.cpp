#include "aula_view.h"

Aula_View::Aula_View(const QSize& s, View* parent) : View(s,parent) {}

void Aula_View::closeEvent(QCloseEvent *event) {
    event->accept();
    hide();
    emit viewClosed();

}
