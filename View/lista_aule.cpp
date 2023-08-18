#include "lista_aule.h"

lista_aule::lista_aule(){}

void lista_aule::visit(const aulaConcerto& aC) {
    viewButton = nullptr;
    editButton = nullptr;
    deleteButton = nullptr;
    widget = new QWidget();
    widget->setObjectName("lista-aule-concerto");

    QHBoxLayout* hbox = new QHBoxLayout(widget);
    hbox->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

    /*
    QPixmap image_object(simple.getImagePath().c_str());
    if (!image_object) {
        image_object = QPixmap(":/assets/images/placeholder.svg");
    }
    QLabel* image = new QLabel();
    image->setPixmap(image_object.scaled(96, 96, Qt::AspectRatioMode::KeepAspectRatio));
    hbox->addWidget(image);
    */

    QVBoxLayout* vbox = new QVBoxLayout();
    vbox->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    hbox->addLayout(vbox);

    QLabel* num = new QLabel(QString::number(aC.getNumero()));
    num->setObjectName("numero");
    vbox->addWidget(num);

    QLabel* piano = new QLabel(QString::number(aC.getPiano()));
    piano->setObjectName("piano");
    vbox->addWidget(piano);

    QLabel* nome = new QLabel(QString::fromStdString(aC.getNome()));
    nome->setObjectName("nome");
    vbox->addWidget(nome);

    QLabel* strum = new QLabel("strumento " + QString::fromStdString(aC.getStrumento()));
    strum->setObjectName("strumento");
    vbox->addWidget(strum);

    QLabel* cap = new QLabel("capienza " + QString::number(aC.getCapienza()));
    cap->setObjectName("capienza");
    vbox->addWidget(cap);

    viewButton = new QPushButton(QIcon(QPixmap(":/Images/search.svg")), "");
    viewButton->setObjectName("view-button");
    vbox->addWidget(viewButton);

    editButton = new QPushButton(QIcon(QPixmap(":/Images/edit.svg")), "");
    editButton->setObjectName("edit-button");
    vbox->addWidget(editButton);

    deleteButton = new QPushButton(QIcon(QPixmap(":/Images/delete.svg")), "");
    deleteButton->setObjectName("delete-button");
    vbox->addWidget(deleteButton);
}

void lista_aule::visit(const aulaStrumentale& aStr) {
    viewButton = nullptr;
    editButton = nullptr;
    deleteButton = nullptr;
    widget = new QWidget();
    widget->setObjectName("lista-aule-strumentali");

    QHBoxLayout* hbox = new QHBoxLayout(widget);
    hbox->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

    /*
    QPixmap image_object(simple.getImagePath().c_str());
    if (!image_object) {
        image_object = QPixmap(":/assets/images/placeholder.svg");
    }
    QLabel* image = new QLabel();
    image->setPixmap(image_object.scaled(96, 96, Qt::AspectRatioMode::KeepAspectRatio));
    hbox->addWidget(image);
    */

    QVBoxLayout* vbox = new QVBoxLayout();
    vbox->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    hbox->addLayout(vbox);

    QLabel* num = new QLabel(QString::number(aStr.getNumero()));
    num->setObjectName("numero");
    vbox->addWidget(num);

    QLabel* piano = new QLabel(QString::number(aStr.getPiano()));
    piano->setObjectName("piano");
    vbox->addWidget(piano);

    QLabel* strum = new QLabel("strumento " + QString::fromStdString(aStr.getStrumento()));
    strum->setObjectName("strumento");
    vbox->addWidget(strum);

    viewButton = new QPushButton(QIcon(QPixmap(":/Images/search.svg")), "");
    viewButton->setObjectName("view-button");
    vbox->addWidget(viewButton);

    editButton = new QPushButton(QIcon(QPixmap(":/Images/edit.svg")), "");
    editButton->setObjectName("edit-button");
    vbox->addWidget(editButton);

    deleteButton = new QPushButton(QIcon(QPixmap(":/Images/delete.svg")), "");
    deleteButton->setObjectName("delete-button");
    vbox->addWidget(deleteButton);
}

void lista_aule::visit(const aulaStudio& aS) {
    viewButton = nullptr;
    editButton = nullptr;
    deleteButton = nullptr;
    widget = new QWidget();
    widget->setObjectName("lista-aule-studio");

    QHBoxLayout* hbox = new QHBoxLayout(widget);
    hbox->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

    /*
    QPixmap image_object(simple.getImagePath().c_str());
    if (!image_object) {
        image_object = QPixmap(":/assets/images/placeholder.svg");
    }
    QLabel* image = new QLabel();
    image->setPixmap(image_object.scaled(96, 96, Qt::AspectRatioMode::KeepAspectRatio));
    hbox->addWidget(image);
    */

    QVBoxLayout* vbox = new QVBoxLayout();
    vbox->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    hbox->addLayout(vbox);

    QLabel* num = new QLabel(QString::number(aS.getNumero()));
    num->setObjectName("numero");
    vbox->addWidget(num);

    QLabel* piano = new QLabel(QString::number(aS.getPiano()));
    piano->setObjectName("piano");
    vbox->addWidget(piano);

    QLabel* lg = new QLabel("leggii " + QString::number(aS.getLeggii()));
    lg->setObjectName("leggii");
    vbox->addWidget(lg);

    viewButton = new QPushButton(QIcon(QPixmap(":/Images/search.svg")), "");
    viewButton->setObjectName("view-button");
    vbox->addWidget(viewButton);

    editButton = new QPushButton(QIcon(QPixmap(":/Images/edit.svg")), "");
    editButton->setObjectName("edit-button");
    vbox->addWidget(editButton);

    deleteButton = new QPushButton(QIcon(QPixmap(":/Images/delete.svg")), "");
    deleteButton->setObjectName("delete-button");
    vbox->addWidget(deleteButton);
}

QWidget* lista_aule::getWidget() const {
    return widget;
}

QPushButton* lista_aule::getViewButton() const {
    return viewButton;
}

QPushButton* lista_aule::getEditButton() const {
    return editButton;
}

QPushButton* lista_aule::getDeleteButton() const {
    return deleteButton;
}

void lista_aule::renderAula(const aula& a, AulaVisitor& visitor) {
    a.accept(visitor);    // Fa visitare l'aula al visitatore

    // Ora puoi utilizzare il risultato ottenuto dal visitatore per il rendering
}
