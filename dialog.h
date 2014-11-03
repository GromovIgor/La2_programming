#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "sort_dlg_modal.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
typedef QVector< QVector<QString> > QDVector;

private:
    Ui::Dialog *ui;
    QString company;
    QString diagonal;
    QString color;
    QString cost;
    sort_dlg_modal sort;
    void setParamTable();
    void erase_edit();

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void setTable(QDVector t);
    void btDeleteItem_clicked();
    void btCreateItem_clicked();
    void btSave_clicked();
    void btOpen_clicked();
    void btSort_clicked();
    void btEdit_clicked();
    void sort_start(int param, int param2);
    void on_tableTV_cellClicked(int row);
    void on_toolButton_clicked();

signals:
    void AddItem(QString company, QString diagonal, QString color, QString cost);
    void DeleteItem(int curRow);
    void EditItem(int curRow, QString company, QString diagonal, QString color, QString cost);
    void SaveToFile();
    void OpenFromFile();
};

#endif // DIALOG_H
