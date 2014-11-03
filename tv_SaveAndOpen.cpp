#include "tv.h"

void tv::SaveToFile()
{
    QString fileName = QFileDialog::getSaveFileName(0,
             tr("Сохранить как"), "",
             tr("Текстовый файл (*.note);;Бинарный файл (*.bin);;Текстовый файл (для просмотра) (*.txt);;Все файлы (*)"));

    if (!fileName.isEmpty())
        {
            QFile file(fileName);
            file.open(QIODevice::WriteOnly);

            if (fileName.right(4) == "note")
                {
                    QTextStream out(&file);
                    for(int i=0; i<TableTv.count(); i++)
                        {
                            for(int j=0; j<TableTv[i].count();j++)
                                out << TableTv[i][j]  << "\r\n";
                        }
                }


            else if (fileName.right(3) == "bin")
                {
                    QDataStream out(&file);
                    out << TableTv;
                    out.setVersion(QDataStream::Qt_4_2);
                }


            else if (fileName.right(3) == "txt")
                {
                    QTextStream out(&file);
                    for(int i=0; i<TableTv.count(); i++)
                        {
                            out << QString(" Запись №") << QString::number(i+1) << "\r\n";
                            for(int j=0; j<TableTv[i].count();j++)
                               {
                                    switch (j)
                                        {
                                            case 0: out << QString("Фирма: "); break;
                                            case 1: out << QString("Диагональ: "); break;
                                            case 2: out << QString("Цвет: "); break;
                                            case 3: out << QString("Цена: "); break;
                                            case 4: out << QString("Габаритный: "); break;
                                        }
                                    out << TableTv[i][j]  << "\r\n";
                                }
                            out << "\r\n";
                        }
                }

            file.close();

            QMessageBox msg;
            msg.setText("Успешное сохранения файла:\r\n"+fileName);
            msg.exec();
        }
}

void tv::OpenFromFile()
{
    QString fileName = QFileDialog::getOpenFileName(0,
             tr("Открыть файл"), "",
             tr("Все файлы (*);;Текстовый файл (*.note);;Бинарный файл (*.bin)"));

    if (!fileName.isEmpty())
        {
            QFile file(fileName);

            if (fileName.right(3)=="bin")
                {
                    file.open(QIODevice::ReadOnly);
                    QDataStream out(&file);
                    TableTv.clear();
                    out.setVersion(QDataStream::Qt_4_2);
                    out >> TableTv;
                    emit setTable(TableTv);
                }

            if (fileName.right(4)=="note")
                {
                    file.open(QIODevice::ReadOnly | QIODevice::Text);
                    QTextStream out(&file);
                    TableTv.clear();
                    QVector<QString> temp(5);
                    while (!out.atEnd())
                    {
                       for (int i=0; i<5; i++)
                           {
                                temp[i] = out.readLine();
                           }
                       TableTv.push_back(temp);
                    }

                    emit setTable(TableTv);
                }

            file.close();

    }

}
