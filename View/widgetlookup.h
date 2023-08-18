#ifndef WIDGETLOOKUP_H
#define WIDGETLOOKUP_H

#include <QWidget>
#include <QPushButton>

#include "../Model/aula.h"

class WidgetLookup {
private:
    const aula* au;
    QWidget* widget;
    QPushButton* viewButton;
    QPushButton* editButton;
    QPushButton* deleteButton;

public:
    WidgetLookup(const aula* au, QWidget* widget,
        QPushButton* viewButton,
        QPushButton* editButton,
        QPushButton* deleteButton
        );
    const aula* getAula() const;
    QWidget* getWidget() const;
    QPushButton* getViewButton() const;
    QPushButton* getEditButton() const;
    QPushButton* getDeleteButton() const;
};


#endif // WIDGETLOOKUP_H
