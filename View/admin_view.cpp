#include "admin_view.h"

admin_view::admin_view(const QSize& s, View* parent) : View(s,parent), mainLayout(new QGridLayout(this)){
    mainLayout->setSpacing(10);

    saveButton = new QPushButton("Save",this);
    mainLayout->addWidget(saveButton,0,1,1,1,Qt::AlignJustify);

    concertoButton = new QPushButton("AULE CONCERTO", this);
    mainLayout->addWidget(concertoButton, 1,1,1,1, Qt::AlignLeft);

    strumButton = new QPushButton("AULE STRUMENTALI", this);
    mainLayout->addWidget(strumButton, 2,1,1,1, Qt::AlignLeft);

    studioButton = new QPushButton("AULE STUDIO", this);
    mainLayout->addWidget(studioButton, 3,1,1,1, Qt::AlignLeft);

    connect(concertoButton,SIGNAL(clicked(bool)),this,SLOT(slot1()));
    connect(strumButton,SIGNAL(clicked(bool)),this,SLOT(slot2()));
    connect(studioButton,SIGNAL(clicked(bool)),this,SLOT(slot3()));

    /*Aula_View* aw = new aulaConcerto_view(QSize(500,300), parent);
    aw->createTable({"Piano","Numero","Sede", "PersoneMax", "Nome", "Strumento", "Capienza", "Amplificazione"});
    mainLayout->addWidget(aw,0,2,4,8,Qt::AlignLeft);

    Aula_View* as = new aulaStrumentale_view(QSize(500,300), parent);
    as->createTable({"Piano","Numero","Sede", "PersoneMax", "Strumento"});
    mainLayout->addWidget(as,4,2,4,8,Qt::AlignLeft);

    Aula_View* ast = new aulaStudio_view(QSize(500,300), parent);
    ast->createTable({"Piano","Numero","Sede", "PersoneMax", "Leggii", "PreseCorrente"});
    mainLayout->addWidget(ast,8,2,4,8,Qt::AlignLeft);
*/

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

