#ifndef ADMIN_VIEW_H
#define ADMIN_VIEW_H

#include "view.h"
#include "Model/storage.h"
#include "WidgetLookup.h"

#include <QObject>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QScrollArea>

/*
#include <QTextEdit>
#include <QDateEdit>
#include <QLineEdit>
#include <QRegularExpressionValidator>
*/

class admin_view: public View {
    Q_OBJECT
private:

    QVBoxLayout* vbox;
    QHBoxLayout* hbox;
    QScrollArea* scrollArea;

protected:
    explicit admin_view();

public:
    explicit admin_view(const QSize& s, View *parent = nullptr);
    void createAulaRow(const aula& a);
    void closeEvent(QCloseEvent *event) override;

public slots:



signals:

};

#endif // ADMIN_VIEW_H
