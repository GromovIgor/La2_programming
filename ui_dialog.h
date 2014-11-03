/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *layout_menu;
    QGroupBox *gbMenu;
    QVBoxLayout *verticalLayout;
    QPushButton *btOpen;
    QPushButton *btSave;
    QPushButton *btSort;
    QPushButton *btDeleteItem;
    QSpacerItem *horizontalSpacer;
    QGroupBox *gbAdd;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *laCompany;
    QLineEdit *edCompany;
    QLabel *laDiagonal;
    QLineEdit *edDiagonal;
    QPushButton *btCreateItem;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QToolButton *toolButton;
    QVBoxLayout *verticalLayout_3;
    QLabel *laColor;
    QLineEdit *edColor;
    QLabel *laCost;
    QLineEdit *edCost;
    QPushButton *btEdit;
    QTableWidget *tableTV;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->setWindowModality(Qt::NonModal);
        Dialog->resize(579, 369);
        Dialog->setContextMenuPolicy(Qt::ActionsContextMenu);
        verticalLayout_4 = new QVBoxLayout(Dialog);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        layout_menu = new QHBoxLayout();
        layout_menu->setSpacing(6);
        layout_menu->setObjectName(QStringLiteral("layout_menu"));
        gbMenu = new QGroupBox(Dialog);
        gbMenu->setObjectName(QStringLiteral("gbMenu"));
        gbMenu->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        gbMenu->setCheckable(false);
        verticalLayout = new QVBoxLayout(gbMenu);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btOpen = new QPushButton(gbMenu);
        btOpen->setObjectName(QStringLiteral("btOpen"));

        verticalLayout->addWidget(btOpen);

        btSave = new QPushButton(gbMenu);
        btSave->setObjectName(QStringLiteral("btSave"));

        verticalLayout->addWidget(btSave);

        btSort = new QPushButton(gbMenu);
        btSort->setObjectName(QStringLiteral("btSort"));

        verticalLayout->addWidget(btSort);

        btDeleteItem = new QPushButton(gbMenu);
        btDeleteItem->setObjectName(QStringLiteral("btDeleteItem"));

        verticalLayout->addWidget(btDeleteItem);


        layout_menu->addWidget(gbMenu);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_menu->addItem(horizontalSpacer);

        gbAdd = new QGroupBox(Dialog);
        gbAdd->setObjectName(QStringLiteral("gbAdd"));
        gbAdd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        horizontalLayout = new QHBoxLayout(gbAdd);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        laCompany = new QLabel(gbAdd);
        laCompany->setObjectName(QStringLiteral("laCompany"));

        verticalLayout_2->addWidget(laCompany);

        edCompany = new QLineEdit(gbAdd);
        edCompany->setObjectName(QStringLiteral("edCompany"));

        verticalLayout_2->addWidget(edCompany);

        laDiagonal = new QLabel(gbAdd);
        laDiagonal->setObjectName(QStringLiteral("laDiagonal"));

        verticalLayout_2->addWidget(laDiagonal);

        edDiagonal = new QLineEdit(gbAdd);
        edDiagonal->setObjectName(QStringLiteral("edDiagonal"));

        verticalLayout_2->addWidget(edDiagonal);

        btCreateItem = new QPushButton(gbAdd);
        btCreateItem->setObjectName(QStringLiteral("btCreateItem"));

        verticalLayout_2->addWidget(btCreateItem);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        toolButton = new QToolButton(gbAdd);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        verticalLayout_5->addWidget(toolButton);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        laColor = new QLabel(gbAdd);
        laColor->setObjectName(QStringLiteral("laColor"));

        verticalLayout_3->addWidget(laColor);

        edColor = new QLineEdit(gbAdd);
        edColor->setObjectName(QStringLiteral("edColor"));

        verticalLayout_3->addWidget(edColor);

        laCost = new QLabel(gbAdd);
        laCost->setObjectName(QStringLiteral("laCost"));

        verticalLayout_3->addWidget(laCost);

        edCost = new QLineEdit(gbAdd);
        edCost->setObjectName(QStringLiteral("edCost"));

        verticalLayout_3->addWidget(edCost);

        btEdit = new QPushButton(gbAdd);
        btEdit->setObjectName(QStringLiteral("btEdit"));
        btEdit->setEnabled(false);

        verticalLayout_3->addWidget(btEdit);


        horizontalLayout->addLayout(verticalLayout_3);


        layout_menu->addWidget(gbAdd);


        verticalLayout_4->addLayout(layout_menu);

        tableTV = new QTableWidget(Dialog);
        tableTV->setObjectName(QStringLiteral("tableTV"));
        tableTV->setInputMethodHints(Qt::ImhNone);
        tableTV->setSortingEnabled(false);

        verticalLayout_4->addWidget(tableTV);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        gbMenu->setTitle(QApplication::translate("Dialog", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216:", 0));
        btOpen->setText(QApplication::translate("Dialog", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", 0));
        btSave->setText(QApplication::translate("Dialog", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", 0));
        btSort->setText(QApplication::translate("Dialog", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260", 0));
        btDeleteItem->setText(QApplication::translate("Dialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", 0));
        gbAdd->setTitle(QApplication::translate("Dialog", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\270 \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\267\320\260\320\277\320\270\321\201\320\270:", 0));
        laCompany->setText(QApplication::translate("Dialog", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214:", 0));
        laDiagonal->setText(QApplication::translate("Dialog", "\320\224\320\270\320\260\320\263\320\276\320\275\320\260\320\273\321\214:", 0));
        btCreateItem->setText(QApplication::translate("Dialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", 0));
        toolButton->setText(QApplication::translate("Dialog", "X", 0));
        laColor->setText(QApplication::translate("Dialog", "\320\246\320\262\320\265\321\202:", 0));
        laCost->setText(QApplication::translate("Dialog", "\320\246\320\265\320\275\320\260:", 0));
        btEdit->setText(QApplication::translate("Dialog", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
