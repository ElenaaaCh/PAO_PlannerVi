#ifndef AULASTRUMENTALE_VIEW_H
#define AULASTRUMENTALE_VIEW_H

#include <QRegularExpressionValidator>
#include "aula_view.h"
#include "Model/aulaStrumentale.h"
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QPixmap>

class aulaStrumentale_view : public Aula_View
{
    Q_OBJECT
private:
    QTableWidget* table;
    QVBoxLayout* vbox;
    QRegularExpressionValidator* validator;
    QPushButton* aggiungi;

    QLineEdit* _piano;
    QLineEdit* _numero;
    QLineEdit* _sede;
    QLineEdit* _pers;
    QLineEdit* _strumento;

public:
    explicit aulaStrumentale_view(const QSize& s, View* );
    void closeEvent(QCloseEvent *) override;
    void createTable() override;
    void carica_view(const contenitore<aula*>&) override;
    void addToView(aula*) override;
    void rimuovi_aula(uint) override;
    void chiudi(uint a);

public slots:
    void aggiungi_slot();


};

#endif // AULASTRUMENTALE_VIEW_H
