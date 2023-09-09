#include "admin_view.h"

admin_view::admin_view(const QSize& s, View* parent) : View(s,parent), mainLayout(new QGridLayout(this)){
    mainLayout->setSpacing(5);
    hbox = new QHBoxLayout(this);

    QFont font;
    font.setBold(true);
    font.setPointSize(14);

    QFont font2;
    font.setBold(true);
    font.setPointSize(12);

    benvenuto = new QLabel("Gestione Aule", this);
    benvenuto->setFont(font);
    mainLayout->addWidget(benvenuto,0,1,Qt::AlignCenter);

    saveButton = new QPushButton("SALVA MODIFICHE su file",this);
    saveButton->setFont(font2);
    mainLayout->addWidget(saveButton,0,2,Qt::AlignCenter);

    QPixmap concertoPixmap(":/Images/aula_c.png");
    QLabel* imgLabel1 = new QLabel(this);
    imgLabel1->setPixmap(concertoPixmap.scaledToHeight(100));
    imgLabel1->setAlignment(Qt::AlignHCenter);
    mainLayout->addWidget(imgLabel1,1,1,Qt::AlignLeft);

    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    concertoButton = new QPushButton("AULE CONCERTO", this);
    concertoButton->setSizePolicy(sizePolicy);
    mainLayout->addWidget(concertoButton, 1,2, Qt::AlignCenter);

    QPixmap strPixmap(":/Images/aula_str.png");
    QLabel* imgLabel2 = new QLabel(this);
    imgLabel2->setPixmap(strPixmap.scaledToHeight(100));
    imgLabel2->setAlignment(Qt::AlignHCenter);
    mainLayout->addWidget(imgLabel2,2,1,Qt::AlignLeft);

    strumButton = new QPushButton("AULE STRUMENTALI", this);
    strumButton->setSizePolicy(sizePolicy);
    mainLayout->addWidget(strumButton, 2,2, Qt::AlignCenter);

    QPixmap studioPixmap(":/Images/aula_studio.png");
    QLabel* imgLabel3 = new QLabel(this);
    imgLabel3->setPixmap(studioPixmap.scaledToHeight(100));
    imgLabel3->setAlignment(Qt::AlignHCenter);
    mainLayout->addWidget(imgLabel3,3,1,Qt::AlignLeft);

    studioButton = new QPushButton("AULE STUDIO", this);
    studioButton->setSizePolicy(sizePolicy);
    mainLayout->addWidget(studioButton, 3,2, Qt::AlignCenter);

    connect(concertoButton,SIGNAL(clicked(bool)),this,SLOT(slot1()));
    connect(strumButton,SIGNAL(clicked(bool)),this,SLOT(slot2()));
    connect(studioButton,SIGNAL(clicked(bool)),this,SLOT(slot3()));
    connect(saveButton,SIGNAL(clicked(bool)),this,SIGNAL(salva_signal()));

    //implementazione
    setLayout(mainLayout);
}

void admin_view::slot1() const{
    emit View_concerto_signal();
}
void admin_view::slot2() const{
    emit View_str_signal();
}
void  admin_view::slot3() const{
    emit View_studio_signal();
}

void admin_view::closeEvent(QCloseEvent *event){
    if(QMessageBox::question(this,"Uscita","Vuoi effettuare il LOGOUT e uscire?",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes){
        event->accept();
        emit viewClosed();
    }
    else
        event->ignore();
}

