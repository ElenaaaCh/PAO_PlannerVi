#include "admin_view.h"

admin_view::admin_view(const QSize& s, View* parent) : View(s,parent), mainLayout(new QGridLayout(this)){
    mainLayout->setSpacing(5);

    hbox = new QHBoxLayout(this);

    QFont font;
    font.setBold(true);
    font.setPointSize(14);

    benvenuto = new QLabel("Gestione Aule", this);
    benvenuto->setAlignment(Qt::AlignCenter);
    benvenuto->setFont(font);
    hbox->addWidget(benvenuto);
    hbox->addStretch();
    saveButton = new QPushButton("Save",this);
    hbox->addWidget(saveButton);

    mainLayout->addLayout(hbox,0,1,Qt::AlignJustify);

    concertoButton = new QPushButton("AULE CONCERTO", this);
    mainLayout->addWidget(concertoButton, 1,1, Qt::AlignLeft);

    /*QPixmap concertoPixmap(":/Images/consvi.svg");
    QLabel imgLabel1 = new QLabel(this);
    imgLabel1->setPixmap(concertoPixmap.scaledToHeight(150));
    imgLabel1->setAlignment(Qt::AlignHCenter);
    layout->addWidget(imgLabel1);
*/
    strumButton = new QPushButton("AULE STRUMENTALI", this);
    mainLayout->addWidget(strumButton, 2,1, Qt::AlignLeft);

    studioButton = new QPushButton("AULE STUDIO", this);
    mainLayout->addWidget(studioButton, 3,1, Qt::AlignLeft);

    connect(concertoButton,SIGNAL(clicked(bool)),this,SLOT(slot1()));
    connect(strumButton,SIGNAL(clicked(bool)),this,SLOT(slot2()));
    connect(studioButton,SIGNAL(clicked(bool)),this,SLOT(slot3()));

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
    if(QMessageBox::question(this,"Uscita","Vuoi uscire davvero?",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes){
        event->accept();
        emit viewClosed();
    }
    else
        event->ignore();
}

