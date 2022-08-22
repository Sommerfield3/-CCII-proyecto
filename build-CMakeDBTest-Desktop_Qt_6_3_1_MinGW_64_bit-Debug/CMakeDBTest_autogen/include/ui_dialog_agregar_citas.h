/********************************************************************************
** Form generated from reading UI file 'dialog_agregar_citas.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_AGREGAR_CITAS_H
#define UI_DIALOG_AGREGAR_CITAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_agregar_citas
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLineEdit *insertar_usuariopac;
    QLabel *label_5;
    QLineEdit *insertar_espec;
    QLabel *label_3;
    QRadioButton *insertar_turnM;
    QRadioButton *insertar_turnT;
    QLabel *label_2;
    QDateEdit *insert_fecha;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_4;
    QPushButton *agregar;
    QPushButton *volver;

    void setupUi(QDialog *Dialog_agregar_citas)
    {
        if (Dialog_agregar_citas->objectName().isEmpty())
            Dialog_agregar_citas->setObjectName(QString::fromUtf8("Dialog_agregar_citas"));
        Dialog_agregar_citas->resize(294, 375);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        Dialog_agregar_citas->setFont(font);
        label = new QLabel(Dialog_agregar_citas);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 241, 21));
        label->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(Dialog_agregar_citas);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 40, 241, 282));
        verticalLayout = new QVBoxLayout(gridLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        insertar_usuariopac = new QLineEdit(gridLayoutWidget);
        insertar_usuariopac->setObjectName(QString::fromUtf8("insertar_usuariopac"));

        verticalLayout->addWidget(insertar_usuariopac);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        insertar_espec = new QLineEdit(gridLayoutWidget);
        insertar_espec->setObjectName(QString::fromUtf8("insertar_espec"));

        verticalLayout->addWidget(insertar_espec);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        insertar_turnM = new QRadioButton(gridLayoutWidget);
        insertar_turnM->setObjectName(QString::fromUtf8("insertar_turnM"));

        verticalLayout->addWidget(insertar_turnM);

        insertar_turnT = new QRadioButton(gridLayoutWidget);
        insertar_turnT->setObjectName(QString::fromUtf8("insertar_turnT"));

        verticalLayout->addWidget(insertar_turnT);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        insert_fecha = new QDateEdit(gridLayoutWidget);
        insert_fecha->setObjectName(QString::fromUtf8("insert_fecha"));

        verticalLayout->addWidget(insert_fecha);

        gridLayoutWidget_3 = new QWidget(Dialog_agregar_citas);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(30, 320, 241, 41));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        agregar = new QPushButton(gridLayoutWidget_3);
        agregar->setObjectName(QString::fromUtf8("agregar"));

        gridLayout_4->addWidget(agregar, 0, 1, 1, 1);

        volver = new QPushButton(gridLayoutWidget_3);
        volver->setObjectName(QString::fromUtf8("volver"));

        gridLayout_4->addWidget(volver, 0, 0, 1, 1);


        retranslateUi(Dialog_agregar_citas);

        QMetaObject::connectSlotsByName(Dialog_agregar_citas);
    } // setupUi

    void retranslateUi(QDialog *Dialog_agregar_citas)
    {
        Dialog_agregar_citas->setWindowTitle(QCoreApplication::translate("Dialog_agregar_citas", "Dialog_agregar_citas", nullptr));
        label->setText(QCoreApplication::translate("Dialog_agregar_citas", "AGREGAR CITA", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog_agregar_citas", "USUARIO DEL PACIENTE:", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog_agregar_citas", "ESPECIALIDAD:", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog_agregar_citas", "TURNO:", nullptr));
        insertar_turnM->setText(QCoreApplication::translate("Dialog_agregar_citas", "Ma\303\261ana", nullptr));
        insertar_turnT->setText(QCoreApplication::translate("Dialog_agregar_citas", "Tarde", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_agregar_citas", "FECHA:", nullptr));
        agregar->setText(QCoreApplication::translate("Dialog_agregar_citas", "AGREGAR", nullptr));
        volver->setText(QCoreApplication::translate("Dialog_agregar_citas", "VOLVER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_agregar_citas: public Ui_Dialog_agregar_citas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_AGREGAR_CITAS_H
