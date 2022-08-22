/********************************************************************************
** Form generated from reading UI file 'newmed.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWMED_H
#define UI_NEWMED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newmed
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QGridLayout *gridLayout;
    QLineEdit *input_nombre;
    QLineEdit *input_esp;
    QLabel *label_9;
    QLineEdit *input_email;
    QLabel *label_7;
    QLabel *label_4;
    QLineEdit *input_ciudad;
    QRadioButton *input_turnoN;
    QLabel *label_2;
    QLineEdit *input_edad;
    QLineEdit *input_DNI;
    QLabel *label;
    QLineEdit *input_clave;
    QRadioButton *input_turnoM;
    QLabel *label_6;
    QLabel *label_8;
    QLineEdit *input_dir;
    QLineEdit *input_tel;
    QLabel *label_11;
    QLabel *label_5;
    QRadioButton *input_turnoT;
    QLabel *label_3;
    QGridLayout *gridLayout_2;
    QPushButton *btn_ingresar;
    QPushButton *btn_volver;

    void setupUi(QWidget *newmed)
    {
        if (newmed->objectName().isEmpty())
            newmed->setObjectName(QString::fromUtf8("newmed"));
        newmed->resize(400, 519);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        newmed->setFont(font);
        widget = new QWidget(newmed);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 381, 501));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setTextFormat(Qt::AutoText);
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_10);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        input_nombre = new QLineEdit(widget);
        input_nombre->setObjectName(QString::fromUtf8("input_nombre"));

        gridLayout->addWidget(input_nombre, 0, 1, 1, 1);

        input_esp = new QLineEdit(widget);
        input_esp->setObjectName(QString::fromUtf8("input_esp"));

        gridLayout->addWidget(input_esp, 7, 1, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        input_email = new QLineEdit(widget);
        input_email->setObjectName(QString::fromUtf8("input_email"));
        input_email->setEchoMode(QLineEdit::NoEcho);

        gridLayout->addWidget(input_email, 5, 1, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        input_ciudad = new QLineEdit(widget);
        input_ciudad->setObjectName(QString::fromUtf8("input_ciudad"));

        gridLayout->addWidget(input_ciudad, 6, 1, 1, 1);

        input_turnoN = new QRadioButton(widget);
        input_turnoN->setObjectName(QString::fromUtf8("input_turnoN"));

        gridLayout->addWidget(input_turnoN, 10, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        input_edad = new QLineEdit(widget);
        input_edad->setObjectName(QString::fromUtf8("input_edad"));

        gridLayout->addWidget(input_edad, 1, 1, 1, 1);

        input_DNI = new QLineEdit(widget);
        input_DNI->setObjectName(QString::fromUtf8("input_DNI"));

        gridLayout->addWidget(input_DNI, 2, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        input_clave = new QLineEdit(widget);
        input_clave->setObjectName(QString::fromUtf8("input_clave"));
        input_clave->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(input_clave, 11, 1, 1, 1);

        input_turnoM = new QRadioButton(widget);
        input_turnoM->setObjectName(QString::fromUtf8("input_turnoM"));

        gridLayout->addWidget(input_turnoM, 8, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        input_dir = new QLineEdit(widget);
        input_dir->setObjectName(QString::fromUtf8("input_dir"));

        gridLayout->addWidget(input_dir, 3, 1, 1, 1);

        input_tel = new QLineEdit(widget);
        input_tel->setObjectName(QString::fromUtf8("input_tel"));

        gridLayout->addWidget(input_tel, 4, 1, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 11, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        input_turnoT = new QRadioButton(widget);
        input_turnoT->setObjectName(QString::fromUtf8("input_turnoT"));

        gridLayout->addWidget(input_turnoT, 9, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        btn_ingresar = new QPushButton(widget);
        btn_ingresar->setObjectName(QString::fromUtf8("btn_ingresar"));

        gridLayout_2->addWidget(btn_ingresar, 0, 1, 1, 1);

        btn_volver = new QPushButton(widget);
        btn_volver->setObjectName(QString::fromUtf8("btn_volver"));

        gridLayout_2->addWidget(btn_volver, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(newmed);

        QMetaObject::connectSlotsByName(newmed);
    } // setupUi

    void retranslateUi(QWidget *newmed)
    {
        newmed->setWindowTitle(QCoreApplication::translate("newmed", "Form", nullptr));
        label_10->setText(QCoreApplication::translate("newmed", "NUEVO M\303\211DICO", nullptr));
        label_9->setText(QCoreApplication::translate("newmed", "Turno", nullptr));
        label_7->setText(QCoreApplication::translate("newmed", "Ciudad", nullptr));
        label_4->setText(QCoreApplication::translate("newmed", "Direcci\303\263n", nullptr));
        input_turnoN->setText(QCoreApplication::translate("newmed", "Noche", nullptr));
        label_2->setText(QCoreApplication::translate("newmed", "Edad", nullptr));
        label->setText(QCoreApplication::translate("newmed", "Nombre", nullptr));
        input_turnoM->setText(QCoreApplication::translate("newmed", "Ma\303\261ana", nullptr));
        label_6->setText(QCoreApplication::translate("newmed", "E-mail", nullptr));
        label_8->setText(QCoreApplication::translate("newmed", "Especialidad", nullptr));
        label_11->setText(QCoreApplication::translate("newmed", "Clave", nullptr));
        label_5->setText(QCoreApplication::translate("newmed", "Tel\303\251fono", nullptr));
        input_turnoT->setText(QCoreApplication::translate("newmed", "Tarde", nullptr));
        label_3->setText(QCoreApplication::translate("newmed", "DNI", nullptr));
        btn_ingresar->setText(QCoreApplication::translate("newmed", "INGRESAR", nullptr));
        btn_volver->setText(QCoreApplication::translate("newmed", "VOLVER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newmed: public Ui_newmed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMED_H
