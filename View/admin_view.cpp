#include "admin_view.h"

admin_view::admin_view(const QSize& s, View* parent) : View(s, parent){
    vbox=new QVBoxLayout(this);
    vbox->setAlignment(Qt::AlignLeft | Qt::AlignTop);

    hbox = new QHBoxLayout(this);
    hbox->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    vbox->addLayout(hbox);

    QFont font;
    font.setBold(true);
    font.setPointSize(14);

    QLabel* titolo=new QLabel("GESTIONE AULE ", this);
    titolo->setFont(font);
    titolo->setAlignment(Qt::AlignHCenter);
    vbox->addWidget(titolo);

    scrollArea= new QScrollArea(this);
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    scrollArea->setWidgetResizable(true);
    vbox->addWidget(scrollArea);

    for (const aula& a : elencoAule) {
        createAulaRow(a);
    }

    /*
    //renderer = new ResultRenderer::List();

    // Clears previous data
    while (!lookup.isEmpty()) {
        WidgetLookup info = lookup.takeLast(); //ATTENZIONE
        delete info.getWidget();
    }

    // Shows new data -> NON SO QUALE DELLE DUE OPZIONI UTILIZZARE

    // A
    ResultRenderer::List* list = new ResultRenderer::List();
    renderer = list;

    // B
    renderer->render(grid, &lookup);

    // Connects signals
    for (
        QVector<WidgetLookup>::const_iterator it = lookup.begin();
        it != lookup.end();
        it++
        ) {
        if (it->getViewButton()) {
            connect(it->getViewButton(), &QPushButton::clicked, std::bind(&ResultsWidget::showItem, this, it->getItem()));
        }
        if (it->getEditButton()) {
            connect(it->getEditButton(), &QPushButton::clicked, std::bind(&ResultsWidget::editItem, this, it->getItem()));
        }
        if (it->getDeleteButton()) {
            connect(it->getDeleteButton(), &QPushButton::clicked, std::bind(&ResultsWidget::deleteItem, this, it->getItem()));
        }
    }
*/
}

void admin_view::createAulaRow(const aula& a) {
    QWidget* aulaWidget = new QWidget();
    QHBoxLayout* aulaLayout = new QHBoxLayout(aulaWidget);

    // Crea un'istanza di a QLabel (o qualsiasi altro widget) che mostri le informazioni dell'aula
    QLabel* aulaInfoLabel = new QLabel();
    // Popola il label con le informazioni specifiche dell'aula
    // ...

    aulaLayout->addWidget(aulaInfoLabel);

    QPushButton* viewButton = new QPushButton("View");
    QPushButton* editButton = new QPushButton("Edit");
    QPushButton* deleteButton = new QPushButton("Delete");

    aulaLayout->addWidget(viewButton);
    aulaLayout->addWidget(editButton);
    aulaLayout->addWidget(deleteButton);

    // Aggiungi una connessione per ciascun pulsante se necessario
    // ...

    scrollArea->widget()->layout()->addWidget(aulaWidget);
}

void admin_view::closeEvent(QCloseEvent *event){
    if(QMessageBox::question(this,"Uscita","Vuoi uscire davvero?",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes){
        event->accept();
        emit viewClosed();
    }
    else
        event->ignore();
}

