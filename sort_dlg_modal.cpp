#include "sort_dlg_modal.h"

sort_dlg_modal::sort_dlg_modal(QWidget *parent) :
    QDialog(parent)
{
    layout_down = new QHBoxLayout;
    sel1 = new QRadioButton("Фирма");
    sel2 = new QRadioButton("Диагональ");
    sel3 = new QRadioButton("Цвет");
    sel4 = new QRadioButton("Цена");
    ok = new QPushButton("OK");
    layout_down->addWidget(sel1);
    layout_down->addWidget(sel2);
    layout_down->addWidget(sel3);
    layout_down->addWidget(sel4);
    layout_down->addWidget(ok);

    layout_up = new QHBoxLayout;
    combo = new QComboBox();
    combo->addItem("В порядке возрастания");
    combo->addItem("В порядке убывания");
    layout_up->addWidget(combo);

    layout_main = new QVBoxLayout;
    layout_main->addLayout(layout_up);
    layout_main->addLayout(layout_down);

    this->setLayout(layout_main);

    connect(ok, SIGNAL(clicked()), this, SLOT(ok_clicked()));
}

void sort_dlg_modal::ok_clicked()
{
    int param=5;
    if (sel1->isChecked())
       param=0;
    else if (sel2->isChecked())
       param=1;
    else if (sel3->isChecked())
       param=2;
    else if (sel4->isChecked())
       param=3;
    else param=5;

    int param2=combo->currentIndex();

    emit send_to_dialog(param, param2);

    this->close();
}
