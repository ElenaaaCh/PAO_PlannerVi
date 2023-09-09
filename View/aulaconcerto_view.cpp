#include "aulaconcerto_view.h"

aulaConcerto_view::aulaConcerto_view(const QSize& s, View* parent) : Aula_View(s,parent), table(new QTableWidget(this)){
    vbox=new QVBoxLayout(this);
}

void aulaConcerto_view::createTable(){
    table->setRowCount(0);
    table->setColumnCount(10);
    table->setHorizontalHeaderLabels({"Piano","Numero","Sede", "PersoneMax", "Nome", "Strumento", "Capienza", "Amplificazione","Elimina","Aggiungi"});
    table->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    table->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    table->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
    for(int i=0;i<8;i++){
        table->setColumnWidth(i, 100);
    }
    table->setColumnWidth(9, 50);
    vbox->addWidget(table);
}

void aulaConcerto_view::carica_view(const contenitore<aula*>& au){
    int i=0;
    for(auto j: au){
        table->insertRow(i);
        aulaConcerto* as= static_cast<aulaConcerto*>(j);
        QLabel* pianoLabel = new QLabel(QString::number(as->getPiano()), this);
        table->setCellWidget(i, 0, pianoLabel);
        QLabel* numeroLabel = new QLabel(QString::number(as->getNumero()), this);
        table->setCellWidget(i, 1, numeroLabel);
        QLabel* sedeLabel = new QLabel(QString::fromStdString(as->getSede()), this);
        table->setCellWidget(i, 2, sedeLabel);
        QLabel* persLabel = new QLabel(QString::number(as->getMaxPersone()), this);
        table->setCellWidget(i, 3, persLabel);
        QLabel* nomeLabel = new QLabel(QString::fromStdString(as->getNome()), this);
        table->setCellWidget(i, 4, nomeLabel);
        QLabel* strumLabel = new QLabel(QString::fromStdString(as->getStrumento()), this);
        table->setCellWidget(i, 5, strumLabel);
        QLabel* capienzaLabel = new QLabel(QString::number(as->getCapienza()), this);
        table->setCellWidget(i, 6, capienzaLabel);
        QLabel* amplLabel = new QLabel(QString::number(as->getAmplificazione()), this);
        table->setCellWidget(i, 7, amplLabel);

        // Crea un QPushButton e imposta la QPixmap come icona
        QPixmap pixmap(":/Images/delete.svg");
        QPushButton *rimuovi = new QPushButton(this);
        rimuovi->setIcon(QIcon(pixmap));
        table->setCellWidget(i, 8, rimuovi);
        connect (rimuovi, &QPushButton::clicked,[this, rimuovi](){
            unsigned int riga = table->indexAt(rimuovi->pos()).row();
            rimuovi_aula(riga);
        });
        QPushButton* vuoto = new QPushButton(this);
        table->setCellWidget(i,9,vuoto);
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

    _nome = new QLineEdit(this);
    table->setCellWidget(i,4,_nome);

    _strumento = new QLineEdit(this);
    table->setCellWidget(i,5,_strumento);

    _capienza = new QLineEdit(this);
    validator = new QRegularExpressionValidator(QRegularExpression("[0-9]+"), _capienza);
    _capienza->setValidator(validator);
    table->setCellWidget(i,6,_capienza);

    _amplificazione = new QComboBox (this);
    _amplificazione->addItem("true");
    _amplificazione->addItem("false");
    _amplificazione->setCurrentIndex(0);//true
    table->setCellWidget(i,7,_amplificazione);

    QPushButton* vuoto = new QPushButton(this);
    table->setCellWidget(i,8,vuoto);

    QPixmap pixmapA(":/Images/add.svg");
    aggiungi = new QPushButton(this);
    aggiungi->setIcon(QIcon(pixmapA));
    table->setCellWidget(i,9,aggiungi);
    table->resizeColumnsToContents();

    // Connessione del pulsante
    connect(aggiungi, SIGNAL(clicked()), this, SLOT(aggiungi_slot()));
}
void aulaConcerto_view::addToView(aula* b) {
    aulaConcerto* a= static_cast<aulaConcerto*>(b);
    table->insertRow(table->rowCount()-1);
    table->setCellWidget(table->rowCount()-2,0,new QLabel(QString::number(a->getPiano()),this));
    table->setCellWidget(table->rowCount()-2,1,new QLabel(QString::number(a->getNumero()),this));
    table->setCellWidget(table->rowCount()-2,2,new QLabel(QString::fromStdString(a->getSede()),this));
    table->setCellWidget(table->rowCount()-2,3,new QLabel(QString::number(a->getMaxPersone()),this));
    table->setCellWidget(table->rowCount()-2,4,new QLabel(QString::fromStdString(a->getNome()),this));
    table->setCellWidget(table->rowCount()-2,5,new QLabel(QString::fromStdString(a->getStrumento()),this));
    table->setCellWidget(table->rowCount()-2,6,new QLabel(QString::number(a->getCapienza()),this));
    table->setCellWidget(table->rowCount()-2,7,new QLabel(QString::number(a->getAmplificazione()),this));

    QPixmap pixmap(":/Images/delete.svg");
    QPushButton *remove = new QPushButton(this);
    remove->setIcon(QIcon(pixmap));
    table->setCellWidget(table->rowCount()-2,8,remove);
    connect(remove, &QPushButton::clicked,[this,remove](){
        unsigned int riga = table->indexAt(remove->pos()).row();
        rimuovi_aula(riga);
    });
    QPushButton* vuoto = new QPushButton(this);
    table->setCellWidget(table->rowCount()-2,9,vuoto);
}
void aulaConcerto_view::aggiungi_slot(){
    int piano = (_piano->text()).toInt();
    int numero = (_numero->text()).toInt();
    QString sede = _sede->text();
    int pers = (_pers->text()).toInt();
    QString nome = _nome->text();
    QString strum = _strumento->text();
    int cap = (_capienza->text()).toInt();
    QString selectedValue = _amplificazione->currentText();
    bool ampl = (selectedValue == "true");

    //controllo errori basilari
    if(piano==NULL || numero==NULL || sede.isEmpty() || pers==NULL || nome.isEmpty() || strum.isEmpty() || cap==NULL){
        static_cast<View*>(this)->showError("Inserimento non valido", "I valori inseriti non sono accettati");
    }
    else{
        emit aggiungi_signal_c(piano, numero, sede, pers, nome, strum, cap, ampl);
    }
}

void aulaConcerto_view::rimuovi_aula(uint i){
    emit rimuovi_signal_concerto(i);
}

void aulaConcerto_view::chiudi(uint a){
    table->removeRow(a);
}

void aulaConcerto_view::closeEvent(QCloseEvent *event) {
    event->accept();
    emit viewClosed();
}

