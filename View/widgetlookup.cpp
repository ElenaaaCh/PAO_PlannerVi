#include "WidgetLookup.h"

WidgetLookup::WidgetLookup(const aula* _au, QWidget* _widget, QPushButton* _viewButton, QPushButton* _editButton, QPushButton* _deleteButton )
    : au(_au), widget(_widget), viewButton(_viewButton), editButton(_editButton), deleteButton(_deleteButton) {}

const aula* WidgetLookup::getAula() const {
    return aula;
}

QWidget* WidgetLookup::getWidget() const {
    return widget;
}

QPushButton* WidgetLookup::getViewButton() const {
    return viewButton;
}

QPushButton* WidgetLookup::getEditButton() const {
    return editButton;
}

QPushButton* WidgetLookup::getDeleteButton() const {
    return deleteButton;
}
