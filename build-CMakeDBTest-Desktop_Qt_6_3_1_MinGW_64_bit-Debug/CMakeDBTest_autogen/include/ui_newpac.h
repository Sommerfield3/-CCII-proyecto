/********************************************************************************
** Form generated from reading UI file 'newpac.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPAC_H
#define UI_NEWPAC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newpac
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QGridLayout *gridLayout;
    QLineEdit *input_clave;
    QLineEdit *input_DNI;
    QLineEdit *input_nombre;
    QLabel *label_11;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *input_dir;
    QLineEdit *input_edad;
    QLabel *label;
    QLineEdit *input_email;
    QLineEdit *input_tel;
    QLabel *label_6;
    QLabel *label_3;
    QLineEdit *input_ciudad;
    QLabel *label_4;
    QLabel *label_7;
    QGridLayout *gridLayout_2;
    QPushButton *btn_ingresar;
    QPushButton *btn_volver;

    void setupUi(QWidget *newpac)
    {
        if (newpac->objectName().isEmpty())
            newpac->setObjectName(QString::fromUtf8("newpac"));
        newpac->resize(400, 380);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        newpac->setFont(font);
        widget = new QWidget(newpac);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 13, 381, 361));
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
        input_clave = new QLineEdit(widget);
        input_clave->setObjectName(QString::fromUtf8("input_clave"));
        input_clave->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(input_clave, 7, 1, 1, 1);

        input_DNI = new QLineEdit(widget);
        input_DNI->setObjectName(QString::fromUtf8("input_DNI"));

        gridLayout->addWidget(input_DNI, 2, 1, 1, 1);

        input_nombre = new QLineEdit(widget);
        input_nombre->setObjectName(QString::fromUtf8("input_nombre"));

        gridLayout->addWidget(input_nombre, 0, 1, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 7, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        input_dir = new QLineEdit(widget);
        input_dir->setObjectName(QString::fromUtf8("input_dir"));

        gridLayout->addWidget(input_dir, 3, 1, 1, 1);

        input_edad = new QLineEdit(widget);
        input_edad->setObjectName(QString::fromUtf8("input_edad"));

        gridLayout->addWidget(input_edad, 1, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        input_email = new QLineEdit(widget);
        input_email->setObjectName(QString::fromUtf8("input_email"));

        gridLayout->addWidget(input_email, 5, 1, 1, 1);

        input_tel = new QLineEdit(widget);
        input_tel->setObjectName(QString::fromUtf8("input_tel"));

        gridLayout->addWidget(input_tel, 4, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        input_ciudad = new QLineEdit(widget);
        input_ciudad->setObjectName(QString::fromUtf8("input_ciudad"));

        gridLayout->addWidget(input_ciudad, 6, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);


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


        retranslateUi(newpac);

        QMetaObject::connectSlotsByName(newpac);
    } // setupUi

    void retranslateUi(QWidget *newpac)
    {
        newpac->setWindowTitle(QCoreApplication::translate("newpac", "Form", nullptr));
        label_10->setText(QCoreApplication::translate("newpac", "NUEVO PACIENTE", nullptr));
        label_11->setText(QCoreApplication::translate("newpac", "Clave", nullptr));
        label_5->setText(QCoreApplication::translate("newpac", "Tel\303\251fono", nullptr));
        label_2->setText(QCoreApplication::translate("newpac", "Edad", nullptr));
        label->setText(QCoreApplication::translate("newpac", "Nombre", nullptr));
        label_6->setText(QCoreApplication::translate("newpac", "E-mail", nullptr));
        label_3->setText(QCoreApplication::translate("newpac", "DNI", nullptr));
        label_4->setText(QCoreApplication::translate("newpac", "Direcci\303\263n", nullptr));
        label_7->setText(QCoreApplication::translate("newpac", "Ciudad", nullptr));
        btn_ingresar->setText(QCoreApplication::translate("newpac", "INGRESAR", nullptr));
        btn_volver->setText(QCoreApplication::translate("newpac", "VOLVER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newpac: public Ui_newpac {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPAC_H
