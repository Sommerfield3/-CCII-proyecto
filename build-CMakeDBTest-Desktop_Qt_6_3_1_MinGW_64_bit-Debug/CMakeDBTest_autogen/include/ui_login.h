/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QFormLayout *formLayout;
    QLabel *label_username;
    QLineEdit *input_username;
    QLabel *label_password;
    QLineEdit *input_password;
    QPushButton *btn_login;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(596, 261);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(Login);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_username = new QLabel(Login);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_username->sizePolicy().hasHeightForWidth());
        label_username->setSizePolicy(sizePolicy1);
        label_username->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(15);
        label_username->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_username);

        input_username = new QLineEdit(Login);
        input_username->setObjectName(QString::fromUtf8("input_username"));
        sizePolicy1.setHeightForWidth(input_username->sizePolicy().hasHeightForWidth());
        input_username->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(17);
        input_username->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, input_username);

        label_password = new QLabel(Login);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        sizePolicy1.setHeightForWidth(label_password->sizePolicy().hasHeightForWidth());
        label_password->setSizePolicy(sizePolicy1);
        label_password->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_password);

        input_password = new QLineEdit(Login);
        input_password->setObjectName(QString::fromUtf8("input_password"));
        sizePolicy1.setHeightForWidth(input_password->sizePolicy().hasHeightForWidth());
        input_password->setSizePolicy(sizePolicy1);
        input_password->setFont(font1);
        input_password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, input_password);

        btn_login = new QPushButton(Login);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btn_login->sizePolicy().hasHeightForWidth());
        btn_login->setSizePolicy(sizePolicy2);
        btn_login->setMinimumSize(QSize(200, 0));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(25);
        btn_login->setFont(font2);

        formLayout->setWidget(2, QFormLayout::FieldRole, btn_login);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Iniciar Sesi\303\263n", nullptr));
        label_username->setText(QCoreApplication::translate("Login", "Usuario:", nullptr));
        input_username->setText(QString());
        label_password->setText(QCoreApplication::translate("Login", "Contrase\303\261a:", nullptr));
        btn_login->setText(QCoreApplication::translate("Login", "Ingresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
