#include "admin_view.h"

admin_view::admin_view(const QSize& s, View* parent) : View(s,parent), mainLayout(new QGridLayout(this)){
    // Grid layout with 3 buttons
    mainLayout->setSpacing(10);

    saveButton = new QPushButton("Save",this);
    mainLayout->addWidget(saveButton,0,1,1,1,Qt::AlignJustify);

    Aula_View* aw = new aulaConcerto_view(QSize(500,300), parent);
    aw->createTable({"Piano","Numero","Sede", "PersoneMax", "Nome", "Strumento", "Capienza", "Amplificazione"});
    mainLayout->addWidget(aw,0,2,4,8,Qt::AlignLeft);

    Aula_View* as = new aulaStrumentale_view(QSize(500,300), parent);
    as->createTable({"Piano","Numero","Sede", "PersoneMax", "Strumento"});
    mainLayout->addWidget(as,4,2,4,8,Qt::AlignLeft);

    Aula_View* ast = new aulaStudio_view(QSize(500,300), parent);
    ast->createTable({"Piano","Numero","Sede", "PersoneMax", "Leggii", "PreseCorrente"});
    mainLayout->addWidget(ast,8,2,4,8,Qt::AlignLeft);

    //implementazione
    setLayout(mainLayout);

}

void admin_view::closeEvent(QCloseEvent *event){
    if(QMessageBox::question(this,"Uscita","Vuoi uscire davvero?",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes){
        event->accept();
        emit viewClosed();
    }
    else
        event->ignore();
}

