#include "aulastrumentale_view.h"

aulaStrumentale_view::aulaStrumentale_view(const QSize& s, View* parent) : Aula_View(s,parent), table(new QTableWidget(this)){
    vbox=new QVBoxLayout(this);
}

void aulaStrumentale_view::createTable(){
    table->setRowCount(0);
    table->setColumnCount(7);
    table->setHorizontalHeaderLabels({"Piano","Numero","Sede", "PersoneMax", "Strumento","Elimina","Aggiungi"});
    table->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    table->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    table->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
    for(int i=0;i<5;i++){
        table->setColumnWidth(i, 100);
    }
    table->setColumnWidth(6, 50);
    vbox->addWidget(table);
}
void aulaStrumentale_view::carica_view(const contenitore<aula*>& au){
    int i=0;
    for(auto j: au){
        table->insertRow(i);
        aulaStrumentale* as= static_cast<aulaStrumentale*>(j);
        QLabel* pianoLabel = new QLabel(QString::number(as->getPiano()), this);
        table->setCellWidget(i, 0, pianoLabel);
        QLabel* numeroLabel = new QLabel(QString::number(as->getNumero()), this);
        table->setCellWidget(i, 1, numeroLabel);
        QLabel* sedeLabel = new QLabel(QString::fromStdString(as->getSede()), this);
        table->setCellWidget(i, 2, sedeLabel);
        QLabel* persLabel = new QLabel(QString::number(as->getMaxPersone()), this);
        table->setCellWidget(i, 3, persLabel);
        QLabel* strumentoLabel = new QLabel(QString::fromStdString(as->getStrumento()), this);
        table->setCellWidget(i, 4, strumentoLabel);

        QPixmap pixmap(":/Images/delete.svg");
        QPushButton *rimuovi = new QPushButton(this);
        rimuovi->setIcon(QIcon(pixmap));
        table->setCellWidget(i, 8, rimuovi);
        connect (rimuovi, &QPushButton::clicked,[this, rimuovi](){
            unsigned int riga = table->indexAt(rimuovi->pos()).row();
            rimuovi_aula(riga);
        });

        i++;
    }

    table->insertRow(i);
    _piano = new QLineEdit(this);
    validator = new QRegularExpressionValidator(QRegularExpression("[0-9]+"), _piano);
    _piano->setValidator(validator);
    table->setCellWidget(i,0,_piano);

    _numero = new QLineEdit(this);
    validator = new QRegularExpressionValidator(QRegularExpression("[0-9]+"), _numero);
    _numero->setValidator(validator);
    table->setCellWidget(i,1,_numero);

    _sede = new QLineEdit(this);
    table->setCellWidget(i,2,_sede);

    _pers = new QLineEdit(this);
    validator = new QRegularExpressionValidator(QRegularExpression("[0-9]+"), _pers);
    _pers->setValidator(validator);
    table->setCellWidget(i,3,_pers);

    _strumento = new QLineEdit(this);
    table->setCellWidget(i,4,_strumento);

    QPushButton* vuoto = new QPushButton(this);
    table->setCellWidget(i,5,vuoto);

    QPixmap pixmapA(":/Images/add.svg");
    aggiungi = new QPushButton (this);
    aggiungi->setIcon(QIcon(pixmapA));
    table->setCellWidget(i,6,aggiungi);
    table->resizeColumnsToContents();

    // Connessione del pulsante
    connect(aggiungi, SIGNAL(clicked()), this, SLOT(aggiungi_slot()));
}

void aulaStrumentale_view::addToView(aula* b) {
    aulaStrumentale* a= static_cast<aulaStrumentale*>(b);
    table->insertRow(table->rowCount()-1);
    table->setCellWidget(table->rowCount()-2,0,new QLabel(QString::number(a->getPiano()),this));
    table->setCellWidget(table->rowCount()-2,1,new QLabel(QString::number(a->getNumero()),this));
    table->setCellWidget(table->rowCount()-2,2,new QLabel(QString::fromStdString(a->getSede()),this));
    table->setCellWidget(table->rowCount()-2,3,new QLabel(QString::number(a->getMaxPersone()),this));
    table->setCellWidget(table->rowCount()-2,4,new QLabel(QString::fromStdString(a->getStrumento()),this));

    QPixmap pixmap(":/Images/delete.svg");
    QPushButton *remove = new QPushButton(this);
    remove->setIcon(QIcon(pixmap));
    table->setCellWidget(table->rowCount()-2,5,remove);
    connect(remove, &QPushButton::clicked,[this,remove](){
        unsigned int riga = table->indexAt(remove->pos()).row();
        emit rimuovi_aula(riga);
    });
}

void aulaStrumentale_view::aggiungi_slot(){
    int piano = (_piano->text()).toInt();
    int numero = (_numero->text()).toInt();
    QString sede = _sede->text();
    int pers = (_pers->text()).toInt();
    QString strum = _strumento->text();

    //controllo errori basilari
    if(piano==NULL || numero==NULL || sede.isEmpty() || pers==NULL ||  strum.isEmpty()){
        static_cast<View*>(this)->showError("Inserimento non valido", "I valori inseriti non sono accettati");
    }
    else{
        emit aggiungi_signal_str(piano, numero, sede, pers, strum);
    }
}

void aulaStrumentale_view::rimuovi_aula(uint i){
    emit rimuovi_signal_strumentale(i);
}

void aulaStrumentale_view::chiudi(uint a){
    table->removeRow(a);
}

void aulaStrumentale_view::closeEvent(QCloseEvent *event) {
    event->accept();
    emit viewClosed();
}

