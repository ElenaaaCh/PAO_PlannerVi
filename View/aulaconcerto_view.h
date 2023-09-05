#ifndef AULACONCERTO_VIEW_H
#define AULACONCERTO_VIEW_H

#include <QRegularExpressionValidator>
#include "aula_view.h"
#include "Model/aulaConcerto.h"
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QComboBox>

class aulaConcerto_view : public Aula_View
{
    Q_OBJECT
private:
    QTableWidget* table;
    QVBoxLayout* vbox;
    QRegularExpressionValidator* validator;
    QPushButton* aggiungi;

    QLineEdit* _piano;
    QLineEdit* _numero;
    QTextEdit* _sede;
    QLineEdit* _pers;
    QTextEdit* _nome;
    QTextEdit* _strumento;
    QLineEdit* _capienza;

    QComboBox* _amplificazione;

protected:

public:
    explicit aulaConcerto_view(const QSize& s, View* );
    void closeEvent(QCloseEvent *) override;
    void createTable() override;
    void carica_view(const contenitore<aula*>&) override;
    void addToView(aula*) override;
    void rimuovi_aula(uint) override;

signals:
    void viewClosed() const; //close_signal to controller
    void rimuovi_signal(uint) const;
    void elimina_signal(uint) const;

};

#endif // AULACONCERTO_VIEW_H
