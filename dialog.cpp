#include "dialog.h"
#include "ui_dialog.h"
#include "tv.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
  ui->setupUi(this);
  setParamTable();
  connect(ui->btCreateItem, SIGNAL(clicked()), this, SLOT(btCreateItem_clicked()));
  connect(ui->btDeleteItem, SIGNAL(clicked()), this, SLOT(btDeleteItem_clicked()));
  connect(ui->btEdit, SIGNAL(clicked()), this, SLOT(btEdit_clicked()));
  connect(ui->btSave, SIGNAL(clicked()), this, SLOT(btSave_clicked()));
  connect(ui->btOpen, SIGNAL(clicked()), this, SLOT(btOpen_clicked()));
  connect(ui->btSort, SIGNAL(clicked()), this, SLOT(btSort_clicked()));
  connect(&sort, SIGNAL(send_to_dialog(int, int)), this, SLOT(sort_start(int, int)));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::setParamTable()
{
    ui->tableTV->setColumnCount(5);
    ui->tableTV->setHorizontalHeaderLabels(QStringList() << "Производитель" << "Диагональ" << "Цвет" << "Цена" << "Габаритный");\
    ui->tableTV->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableTV->setSelectionMode(QAbstractItemView::SingleSelection);

}

void Dialog::btCreateItem_clicked()
{
   company = ui->edCompany->text();
   diagonal = ui->edDiagonal->text();
   color = ui->edColor->text();
   cost = ui->edCost->text();
   if (!cost.isEmpty() && !color.isEmpty() && !diagonal.isEmpty() && !company.isEmpty())
        emit AddItem(company, diagonal, color, cost);
   else
        {
            QMessageBox msg;
            msg.setText("Необходимо заполнить все поля.");
            msg.exec();
        }
}

void Dialog::setTable(QDVector t)
{
    ui->tableTV->clear();
    setParamTable();
    ui->tableTV->setRowCount(t.size());
    for(int i=0; i < ui->tableTV->rowCount(); i++)
        for(int j=0; j < ui->tableTV->columnCount(); j++)
        {
            QTableWidgetItem *itm = new QTableWidgetItem();
            if (j==1 || j==3)
                itm->setData(Qt::DisplayRole, t.at(i).at(j).toInt());
            else
                itm->setData(Qt::DisplayRole, t.at(i).at(j));
            itm->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
            ui->tableTV->setItem(i, j, itm);

        }
}

void Dialog::btDeleteItem_clicked()
{
    int curRow = ui->tableTV->currentRow();
    if (curRow != -1)
        emit DeleteItem(curRow);
    else
        {
            QMessageBox msg;
            msg.setText("Необходимо выделить запись для удаления.");
            msg.exec();
        }
    erase_edit();
}

void Dialog::btSave_clicked()
{
    emit SaveToFile();
}

void Dialog::btOpen_clicked()
{
    emit OpenFromFile();
}

void Dialog::btSort_clicked()
{
    sort.exec();
}

void Dialog::sort_start(int param, int param2)
{
    if (param != 5)
        {
            if (param2==0)
                ui->tableTV->sortItems(param, Qt::AscendingOrder);
            else
                ui->tableTV->sortItems(param, Qt::DescendingOrder);
        }
    else
        {
            QMessageBox msg;
            msg.setText("Не выбрано поле для сортировки.");
            msg.exec();
        }
}

void Dialog::on_tableTV_cellClicked(int row)
{
    ui->edCompany->setText(ui->tableTV->item(row, 0)->text());
    ui->edDiagonal->setText(ui->tableTV->item(row, 1)->text());
    ui->edColor->setText(ui->tableTV->item(row, 2)->text());
    ui->edCost->setText(ui->tableTV->item(row, 3)->text());
    ui->btEdit->setEnabled(true);
}

void Dialog::on_toolButton_clicked()
{
    erase_edit();
}

void Dialog::erase_edit()
{
    ui->edCompany->setText("");
    ui->edDiagonal->setText("");
    ui->edColor->setText("");
    ui->edCost->setText("");
    ui->btEdit->setEnabled(false);
}

void Dialog::btEdit_clicked()
{
    int curRow = ui->tableTV->currentRow();
    emit EditItem(curRow, ui->edCompany->text(), ui->edDiagonal->text(), ui->edColor->text(), ui->edCost->text());
}
