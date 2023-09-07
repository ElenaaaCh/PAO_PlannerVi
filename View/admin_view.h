#ifndef ADMIN_VIEW_H
#define ADMIN_VIEW_H

#include "view.h"
#include "Model/storage.h"
#include "View/aulastudio_view.h"
#include "View/aulastrumentale_view.h"
#include "View/aulaconcerto_view.h"
#include <QObject>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QPixmap>

class admin_view: public View {
    Q_OBJECT
private:
    aulaStudio_view * studio;
    QGridLayout* mainLayout;
    QHBoxLayout* hbox;
    QLabel* benvenuto;
    QPushButton* saveButton;
    QPushButton* concertoButton;
    QPushButton* strumButton;
    QPushButton* studioButton;

protected:
    explicit admin_view();

public:
    explicit admin_view(const QSize& s, View *parent = nullptr);
    //void setViewTitle (const QString &title) override;
    void closeEvent(QCloseEvent *event) override;

signals:
    void View_concerto_signal() const;
    void View_str_signal() const;
    void View_studio_signal() const;
    void viewClosed() const;

public slots:
    void slot1() const;
    void slot2() const;
    void slot3() const;
};

#endif // ADMIN_VIEW_H
