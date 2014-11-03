#include "tv.h"

void tv::AddItem(QString company, QString diagonal, QString color, QString cost)
{
    QVector <QString> temp(5);

    temp[0] = company;
    temp[1] = diagonal;
    temp[2] = color;
    temp[3] = cost;

    if (diagonal.toInt()<15)
        temp[4] = "Да";
    else temp[4] = "Нет";

    TableTv.push_back(temp);
    emit setTable(TableTv);

    QMessageBox msg;
    msg.setText("Запись добавлена.");
    msg.exec();
}

void tv::DeleteItem(int curRow)
{
    TableTv.remove(curRow);
    emit setTable(TableTv);

    QMessageBox msg;
    msg.setText("Запись удалена.");
    msg.exec();
}

void tv::EditItem(int curRow, QString company, QString diagonal, QString color, QString cost)
{
    TableTv[curRow][0] = company;
    TableTv[curRow][1] = diagonal;
    TableTv[curRow][2] = color;
    TableTv[curRow][3] = cost;
    if (diagonal.toInt()<15)
        TableTv[curRow][4] = "Да";
    else TableTv[curRow][4] = "Нет";
    setTable(TableTv);
}
