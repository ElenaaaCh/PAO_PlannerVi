#include "aulastudio_view.h"

aulaStudio_view::aulaStudio_view(const QSize& s, View* parent) : Aula_View(s,parent), table(new QTableWidget(this)){
    vbox=new QVBoxLayout(this);
}

void aulaStudio_view::createTable(const QStringList& headers){
    table->setRowCount(0);
    table->setColumnCount(6);
    table->setHorizontalHeaderLabels(headers);
    table->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    table->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    table->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
    table->setColumnWidth(4,25);
    vbox->addWidget(table);
}
void aulaStudio_view::carica_view(const contenitore<aula*>& au){
    int i=0;
    for(auto j: au){
        table->insertRow(i);
        aulaStudio* as= static_cast<aulaStudio*>(j);
        QLabel* pianoLabel = new QLabel(QString::number(as->getPiano()), this);
        table->setCellWidget(i, 0, pianoLabel);
        QLabel* numeroLabel = new QLabel(QString::number(as->getNumero()), this);
        table->setCellWidget(i, 1, numeroLabel);
        QLabel* sedeLabel = new QLabel(QString::fromStdString(as->getSede()), this);
        table->setCellWidget(i, 2, sedeLabel);
        QLabel* persLabel = new QLabel(QString::number(as->getMaxPersone()), this);
        table->setCellWidget(i, 3, persLabel);
        QLabel* leggiiLabel = new QLabel(QString::number(as->getLeggii()), this);
        table->setCellWidget(i, 4, leggiiLabel);
        QLabel* preseLabel = new QLabel(QString::number(as->getPreseCorrente()), this);
        table->setCellWidget(i, 5, preseLabel);

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

    _sede = new QTextEdit(this);
    table->setCellWidget(i,2,_sede);

    _pers = new QLineEdit(this);
    validator = new QRegularExpressionValidator(QRegularExpression("[0-9]+"), _pers);
    _pers->setValidator(validator);
    table->setCellWidget(i,3,_pers);

    _leggii = new QLineEdit(this);
    validator = new QRegularExpressionValidator(QRegularExpression("[0-9]+"), _leggii);
    _leggii->setValidator(validator);
    table->setCellWidget(i,4,_leggii);

    _prese = new QLineEdit(this);
    validator = new QRegularExpressionValidator(QRegularExpression("[0-9]+"), _prese);
    _prese->setValidator(validator);
    table->setCellWidget(i,5,_prese);

    aggiungi = new QPushButton ("+", this);
    table->setCellWidget(i,6,aggiungi);
    table->resizeColumnsToContents();

    // Connessione del pulsante
    connect(aggiungi, SIGNAL(clicked()), this, SIGNAL (ButtonClicked()));
    connect(this,SIGNAL(ButtonClicked()),this,SLOT(aggiungi_pren()));
}
void aulaStudio_view::addToView(aula* b) {
    aulaStudio* a= static_cast<aulaStudio*>(b);
    table->insertRow(table->rowCount()-1);
    table->setCellWidget(table->rowCount()-2,0,new QLabel(QString::number(a->getPiano()),this));
    table->setCellWidget(table->rowCount()-2,1,new QLabel(QString::number(a->getNumero()),this));
    table->setCellWidget(table->rowCount()-2,2,new QLabel(QString::fromStdString(a->getSede()),this));
    table->setCellWidget(table->rowCount()-2,3,new QLabel(QString::number(a->getMaxPersone()),this));
    table->setCellWidget(table->rowCount()-2,4,new QLabel(QString::number(a->getLeggii()),this));
    table->setCellWidget(table->rowCount()-2,5,new QLabel(QString::number(a->getPreseCorrente()),this));
    QPushButton* remove=new QPushButton("-",this);
    table->setCellWidget(table->rowCount()-2,7,remove);
    connect(remove, &QPushButton::clicked,[this,remove](){
        unsigned int riga = table->indexAt(remove->pos()).row();
        emit rimuovi_signal_s(riga);
    });
}
void aulaStudio_view::rimuovi_aula(uint i){
    table->removeRow(i);
    emit rimuovi_signal_studio(i);
}

void aulaStudio_view::closeEvent(QCloseEvent *event) {
    if(QMessageBox::question(this,"Uscita","Vuoi uscire davvero?",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes){
        event->accept();
        emit viewClosed();
    }
    else
        event->ignore();
}
