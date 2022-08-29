/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QPushButton *nuevoBtn;
    QPushButton *eliminarBtn;
    QPushButton *actualizarBtn;
    QSpacerItem *horizontalSpacer;
    QTableView *clientes;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(734, 276);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nuevoBtn = new QPushButton(Widget);
        nuevoBtn->setObjectName(QString::fromUtf8("nuevoBtn"));

        gridLayout->addWidget(nuevoBtn, 2, 5, 1, 1);

        eliminarBtn = new QPushButton(Widget);
        eliminarBtn->setObjectName(QString::fromUtf8("eliminarBtn"));

        gridLayout->addWidget(eliminarBtn, 2, 4, 1, 1);

        actualizarBtn = new QPushButton(Widget);
        actualizarBtn->setObjectName(QString::fromUtf8("actualizarBtn"));

        gridLayout->addWidget(actualizarBtn, 2, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        clientes = new QTableView(Widget);
        clientes->setObjectName(QString::fromUtf8("clientes"));

        gridLayout->addWidget(clientes, 1, 1, 1, 5);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Pacientes", nullptr));
        nuevoBtn->setText(QCoreApplication::translate("Widget", "Nuevo", nullptr));
        eliminarBtn->setText(QCoreApplication::translate("Widget", "Eliminar", nullptr));
        actualizarBtn->setText(QCoreApplication::translate("Widget", "Actualizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
