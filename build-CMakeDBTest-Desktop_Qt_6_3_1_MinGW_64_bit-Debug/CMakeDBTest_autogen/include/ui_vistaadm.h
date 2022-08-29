/********************************************************************************
** Form generated from reading UI file 'vistaadm.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISTAADM_H
#define UI_VISTAADM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vistaadm
{
public:
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_agregarmed;
    QPushButton *btn_agregarpac;
    QPushButton *btn_cerrar;
    QPushButton *btn_agregarcita;

    void setupUi(QWidget *vistaadm)
    {
        if (vistaadm->objectName().isEmpty())
            vistaadm->setObjectName(QString::fromUtf8("vistaadm"));
        vistaadm->resize(400, 244);
        label = new QLabel(vistaadm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 20, 401, 20));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        widget = new QWidget(vistaadm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 50, 341, 181));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_agregarmed = new QPushButton(widget);
        btn_agregarmed->setObjectName(QString::fromUtf8("btn_agregarmed"));
        btn_agregarmed->setFont(font);

        gridLayout->addWidget(btn_agregarmed, 1, 0, 1, 1);

        btn_agregarpac = new QPushButton(widget);
        btn_agregarpac->setObjectName(QString::fromUtf8("btn_agregarpac"));
        btn_agregarpac->setFont(font);

        gridLayout->addWidget(btn_agregarpac, 2, 0, 1, 1);

        btn_cerrar = new QPushButton(widget);
        btn_cerrar->setObjectName(QString::fromUtf8("btn_cerrar"));
        btn_cerrar->setFont(font);

        gridLayout->addWidget(btn_cerrar, 4, 0, 1, 1);

        btn_agregarcita = new QPushButton(widget);
        btn_agregarcita->setObjectName(QString::fromUtf8("btn_agregarcita"));
        btn_agregarcita->setFont(font);

        gridLayout->addWidget(btn_agregarcita, 0, 0, 1, 1);


        retranslateUi(vistaadm);

        QMetaObject::connectSlotsByName(vistaadm);
    } // setupUi

    void retranslateUi(QWidget *vistaadm)
    {
        vistaadm->setWindowTitle(QCoreApplication::translate("vistaadm", "Form", nullptr));
        label->setText(QCoreApplication::translate("vistaadm", "BIENVENIDO", nullptr));
        btn_agregarmed->setText(QCoreApplication::translate("vistaadm", "AGREGAR M\303\211DICO", nullptr));
        btn_agregarpac->setText(QCoreApplication::translate("vistaadm", "AGREGAR PACIENTE", nullptr));
        btn_cerrar->setText(QCoreApplication::translate("vistaadm", "CERRAR SESI\303\223N", nullptr));
        btn_agregarcita->setText(QCoreApplication::translate("vistaadm", "AGREGAR CITA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vistaadm: public Ui_vistaadm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISTAADM_H
