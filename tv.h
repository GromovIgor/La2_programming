#ifndef TV_H
#define TV_H
#include <QObject>
#include <QVector>
#include <QStringList>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>
#include <QIODevice>

class tv : public QObject
{
    Q_OBJECT
typedef QVector< QVector<QString> > QDVector;

public:
    explicit tv(QObject *parent = 0);

private:
   QDVector TableTv;

signals:
    void setTable(QDVector t);

private slots:
    void AddItem(QString company, QString diagonal, QString color, QString cost);
    void DeleteItem(int curRow);
    void EditItem(int curRow, QString company, QString diagonal, QString color, QString cost);
    void SaveToFile();
    void OpenFromFile();

};

#endif // TV_H
