/********************************************************************************
** Form generated from reading UI file 'menudoctor.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUDOCTOR_H
#define UI_MENUDOCTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menuDoctor
{
public:
    QGridLayout *gridLayout;
    QPushButton *btn_logout;
    QPushButton *btn_citasCalendar;
    QLabel *txt_bienvenida;
    QFrame *line;
    QFrame *line_2;

    void setupUi(QDialog *menuDoctor)
    {
        if (menuDoctor->objectName().isEmpty())
            menuDoctor->setObjectName(QString::fromUtf8("menuDoctor"));
        menuDoctor->resize(1024, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(menuDoctor->sizePolicy().hasHeightForWidth());
        menuDoctor->setSizePolicy(sizePolicy);
        menuDoctor->setMinimumSize(QSize(512, 300));
        menuDoctor->setMaximumSize(QSize(1024, 600));
        menuDoctor->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(menuDoctor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_logout = new QPushButton(menuDoctor);
        btn_logout->setObjectName(QString::fromUtf8("btn_logout"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_logout->sizePolicy().hasHeightForWidth());
        btn_logout->setSizePolicy(sizePolicy1);
        btn_logout->setMinimumSize(QSize(250, 20));
        btn_logout->setMaximumSize(QSize(1000, 80));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(20);
        font.setBold(true);
        btn_logout->setFont(font);
        btn_logout->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btn_logout, 4, 0, 1, 1);

        btn_citasCalendar = new QPushButton(menuDoctor);
        btn_citasCalendar->setObjectName(QString::fromUtf8("btn_citasCalendar"));
        sizePolicy1.setHeightForWidth(btn_citasCalendar->sizePolicy().hasHeightForWidth());
        btn_citasCalendar->setSizePolicy(sizePolicy1);
        btn_citasCalendar->setMinimumSize(QSize(250, 20));
        btn_citasCalendar->setMaximumSize(QSize(1000, 80));
        btn_citasCalendar->setFont(font);
        btn_citasCalendar->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btn_citasCalendar, 2, 0, 1, 1);

        txt_bienvenida = new QLabel(menuDoctor);
        txt_bienvenida->setObjectName(QString::fromUtf8("txt_bienvenida"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(txt_bienvenida->sizePolicy().hasHeightForWidth());
        txt_bienvenida->setSizePolicy(sizePolicy2);
        txt_bienvenida->setMaximumSize(QSize(900, 80));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(15);
        txt_bienvenida->setFont(font1);
        txt_bienvenida->setStyleSheet(QString::fromUtf8(""));
        txt_bienvenida->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(txt_bienvenida, 0, 0, 1, 1);

        line = new QFrame(menuDoctor);
        line->setObjectName(QString::fromUtf8("line"));
        sizePolicy2.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy2);
        line->setMinimumSize(QSize(100, 5));
        line->setMaximumSize(QSize(900, 5));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 1);

        line_2 = new QFrame(menuDoctor);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        sizePolicy2.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy2);
        line_2->setMinimumSize(QSize(100, 5));
        line_2->setMaximumSize(QSize(900, 5));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 1, 0, 1, 1);


        retranslateUi(menuDoctor);

        QMetaObject::connectSlotsByName(menuDoctor);
    } // setupUi

    void retranslateUi(QDialog *menuDoctor)
    {
        menuDoctor->setWindowTitle(QCoreApplication::translate("menuDoctor", "Men\303\272", nullptr));
        btn_logout->setText(QCoreApplication::translate("menuDoctor", "Cerrar Sesi\303\263n", nullptr));
        btn_citasCalendar->setText(QCoreApplication::translate("menuDoctor", "Ver Citas M\303\251dicas", nullptr));
        txt_bienvenida->setText(QCoreApplication::translate("menuDoctor", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menuDoctor: public Ui_menuDoctor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUDOCTOR_H
