/********************************************************************************
** Form generated from reading UI file 'menupaciente.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPACIENTE_H
#define UI_MENUPACIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menupaciente
{
public:
    QPushButton *btn_logout;
    QPushButton *btn_citasCalendar;
    QLabel *txt_bienvenida;
    QFrame *line_2;
    QFrame *line;

    void setupUi(QWidget *menupaciente)
    {
        if (menupaciente->objectName().isEmpty())
            menupaciente->setObjectName(QString::fromUtf8("menupaciente"));
        menupaciente->resize(1024, 600);
        btn_logout = new QPushButton(menupaciente);
        btn_logout->setObjectName(QString::fromUtf8("btn_logout"));
        btn_logout->setGeometry(QRect(60, 452, 900, 80));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_logout->sizePolicy().hasHeightForWidth());
        btn_logout->setSizePolicy(sizePolicy);
        btn_logout->setMinimumSize(QSize(250, 20));
        btn_logout->setMaximumSize(QSize(1000, 80));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(20);
        font.setBold(true);
        btn_logout->setFont(font);
        btn_logout->setStyleSheet(QString::fromUtf8(""));
        btn_citasCalendar = new QPushButton(menupaciente);
        btn_citasCalendar->setObjectName(QString::fromUtf8("btn_citasCalendar"));
        btn_citasCalendar->setGeometry(QRect(60, 253, 900, 80));
        sizePolicy.setHeightForWidth(btn_citasCalendar->sizePolicy().hasHeightForWidth());
        btn_citasCalendar->setSizePolicy(sizePolicy);
        btn_citasCalendar->setMinimumSize(QSize(250, 20));
        btn_citasCalendar->setMaximumSize(QSize(1000, 80));
        btn_citasCalendar->setFont(font);
        btn_citasCalendar->setStyleSheet(QString::fromUtf8(""));
        txt_bienvenida = new QLabel(menupaciente);
        txt_bienvenida->setObjectName(QString::fromUtf8("txt_bienvenida"));
        txt_bienvenida->setGeometry(QRect(60, 54, 900, 80));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txt_bienvenida->sizePolicy().hasHeightForWidth());
        txt_bienvenida->setSizePolicy(sizePolicy1);
        txt_bienvenida->setMaximumSize(QSize(900, 80));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(15);
        txt_bienvenida->setFont(font1);
        txt_bienvenida->setStyleSheet(QString::fromUtf8(""));
        txt_bienvenida->setAlignment(Qt::AlignCenter);
        line_2 = new QFrame(menupaciente);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(60, 191, 900, 5));
        sizePolicy1.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy1);
        line_2->setMinimumSize(QSize(100, 5));
        line_2->setMaximumSize(QSize(900, 5));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line = new QFrame(menupaciente);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(60, 390, 900, 5));
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setMinimumSize(QSize(100, 5));
        line->setMaximumSize(QSize(900, 5));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(menupaciente);

        QMetaObject::connectSlotsByName(menupaciente);
    } // setupUi

    void retranslateUi(QWidget *menupaciente)
    {
        menupaciente->setWindowTitle(QCoreApplication::translate("menupaciente", "Form", nullptr));
        btn_logout->setText(QCoreApplication::translate("menupaciente", "Cerrar Sesi\303\263n", nullptr));
        btn_citasCalendar->setText(QCoreApplication::translate("menupaciente", "Ver Citas M\303\251dicas", nullptr));
        txt_bienvenida->setText(QCoreApplication::translate("menupaciente", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menupaciente: public Ui_menupaciente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPACIENTE_H
