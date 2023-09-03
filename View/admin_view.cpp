#include "admin_view.h"

admin_view::admin_view(const QSize& s, View* parent) : View(s,parent), mainLayout(new QGridLayout(this)){
    // Grid layout with 3 buttons
    mainLayout->setSpacing(10);


    saveButton = new QPushButton("Save",this);
    mainLayout->addWidget(saveButton,0,1,1,1,Qt::AlignJustify);


    //implementazione
    setLayout(mainLayout);

    //Connessione dei SIGNAL dei Widget al Signal della AdminView
   // connectViewSignals();
}

void admin_view::closeEvent(QCloseEvent *event){
    if(QMessageBox::question(this,"Uscita","Vuoi uscire davvero?",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes){
        event->accept();
        emit viewClosed();
    }
    else
        event->ignore();
}

