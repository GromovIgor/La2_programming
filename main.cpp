#include "dialog.h"
#include "tv.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    tv *TV = new tv();
    QObject::connect(&w, SIGNAL(AddItem(QString,QString,QString,QString)),TV, SLOT(AddItem(QString,QString,QString,QString)));
    QObject::connect(TV, SIGNAL(setTable(QDVector)),&w,SLOT(setTable(QDVector)));
    QObject::connect(&w, SIGNAL(DeleteItem(int)),TV,SLOT(DeleteItem(int)));
    QObject::connect(&w, SIGNAL(EditItem(int,QString,QString,QString,QString)),TV,SLOT(EditItem(int,QString,QString,QString,QString)));
    QObject::connect(&w, SIGNAL(SaveToFile()), TV, SLOT(SaveToFile()));
    QObject::connect(&w, SIGNAL(OpenFromFile()), TV, SLOT(OpenFromFile()));
    return a.exec();
}
