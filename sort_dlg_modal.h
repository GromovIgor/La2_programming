#ifndef SORT_DLG_MODAL_H
#define SORT_DLG_MODAL_H

#include <QDialog>
#include <QRadioButton>
#include <QPushButton>
#include <QHBoxLayout>
#include <QComboBox>
#include <QVBoxLayout>

class sort_dlg_modal : public QDialog
{
    Q_OBJECT
public:
    explicit sort_dlg_modal(QWidget *parent = 0);

private:
    QHBoxLayout *layout_up;
    QHBoxLayout *layout_down;
    QVBoxLayout *layout_main;
    QRadioButton *sel1;
    QRadioButton *sel2;
    QRadioButton *sel3;
    QRadioButton *sel4;
    QPushButton *ok;
    QComboBox *combo;

signals:
    void send_to_dialog(int param, int param2);
public slots:
    void ok_clicked();

};

#endif // SORT_DLG_MODAL_H
