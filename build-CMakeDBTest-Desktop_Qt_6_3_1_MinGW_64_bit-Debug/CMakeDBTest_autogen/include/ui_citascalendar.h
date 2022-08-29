/********************************************************************************
** Form generated from reading UI file 'citascalendar.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CITASCALENDAR_H
#define UI_CITASCALENDAR_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_citasCalendar
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_paciente;
    QLineEdit *txt_nombrePac;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbl_dni;
    QLineEdit *txt_dni;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbl_tel;
    QLineEdit *txt_telef;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbl_edad;
    QLineEdit *txt_edad;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *lbl_cita;
    QTimeEdit *time_horaCita;
    QHBoxLayout *horizontalLayout_12;
    QLabel *lbl_turno;
    QLineEdit *txt_turno;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lbl_estado;
    QLineEdit *txt_estado;
    QTableView *tableView;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QCalendarWidget *calendarCitas;
    QPushButton *pushButton;

    void setupUi(QWidget *citasCalendar)
    {
        if (citasCalendar->objectName().isEmpty())
            citasCalendar->setObjectName(QString::fromUtf8("citasCalendar"));
        citasCalendar->resize(1024, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(citasCalendar->sizePolicy().hasHeightForWidth());
        citasCalendar->setSizePolicy(sizePolicy);
        citasCalendar->setMinimumSize(QSize(1024, 600));
        citasCalendar->setMaximumSize(QSize(1024, 600));
        horizontalLayout = new QHBoxLayout(citasCalendar);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lbl_paciente = new QLabel(citasCalendar);
        lbl_paciente->setObjectName(QString::fromUtf8("lbl_paciente"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbl_paciente->sizePolicy().hasHeightForWidth());
        lbl_paciente->setSizePolicy(sizePolicy1);
        lbl_paciente->setMaximumSize(QSize(150, 50));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        lbl_paciente->setFont(font);

        horizontalLayout_2->addWidget(lbl_paciente);

        txt_nombrePac = new QLineEdit(citasCalendar);
        txt_nombrePac->setObjectName(QString::fromUtf8("txt_nombrePac"));
        txt_nombrePac->setEnabled(false);
        sizePolicy1.setHeightForWidth(txt_nombrePac->sizePolicy().hasHeightForWidth());
        txt_nombrePac->setSizePolicy(sizePolicy1);
        txt_nombrePac->setMaximumSize(QSize(350, 50));
        QFont font1;
        font1.setPointSize(12);
        txt_nombrePac->setFont(font1);

        horizontalLayout_2->addWidget(txt_nombrePac);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lbl_dni = new QLabel(citasCalendar);
        lbl_dni->setObjectName(QString::fromUtf8("lbl_dni"));
        sizePolicy1.setHeightForWidth(lbl_dni->sizePolicy().hasHeightForWidth());
        lbl_dni->setSizePolicy(sizePolicy1);
        lbl_dni->setMaximumSize(QSize(50, 50));
        lbl_dni->setFont(font);
        lbl_dni->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_4->addWidget(lbl_dni);

        txt_dni = new QLineEdit(citasCalendar);
        txt_dni->setObjectName(QString::fromUtf8("txt_dni"));
        txt_dni->setEnabled(false);
        sizePolicy1.setHeightForWidth(txt_dni->sizePolicy().hasHeightForWidth());
        txt_dni->setSizePolicy(sizePolicy1);
        txt_dni->setMaximumSize(QSize(100, 50));
        txt_dni->setFont(font1);
        txt_dni->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_4->addWidget(txt_dni);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        line_2 = new QFrame(citasCalendar);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lbl_tel = new QLabel(citasCalendar);
        lbl_tel->setObjectName(QString::fromUtf8("lbl_tel"));
        sizePolicy1.setHeightForWidth(lbl_tel->sizePolicy().hasHeightForWidth());
        lbl_tel->setSizePolicy(sizePolicy1);
        lbl_tel->setMaximumSize(QSize(16777215, 50));
        lbl_tel->setFont(font);

        horizontalLayout_5->addWidget(lbl_tel);

        txt_telef = new QLineEdit(citasCalendar);
        txt_telef->setObjectName(QString::fromUtf8("txt_telef"));
        txt_telef->setEnabled(false);
        sizePolicy1.setHeightForWidth(txt_telef->sizePolicy().hasHeightForWidth());
        txt_telef->setSizePolicy(sizePolicy1);
        txt_telef->setMaximumSize(QSize(16777215, 50));
        txt_telef->setFont(font1);

        horizontalLayout_5->addWidget(txt_telef);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        line_3 = new QFrame(citasCalendar);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lbl_edad = new QLabel(citasCalendar);
        lbl_edad->setObjectName(QString::fromUtf8("lbl_edad"));
        lbl_edad->setMaximumSize(QSize(100, 50));
        lbl_edad->setFont(font);

        horizontalLayout_7->addWidget(lbl_edad);

        txt_edad = new QLineEdit(citasCalendar);
        txt_edad->setObjectName(QString::fromUtf8("txt_edad"));
        txt_edad->setEnabled(false);
        sizePolicy1.setHeightForWidth(txt_edad->sizePolicy().hasHeightForWidth());
        txt_edad->setSizePolicy(sizePolicy1);
        txt_edad->setMaximumSize(QSize(80, 50));
        txt_edad->setFont(font1);

        horizontalLayout_7->addWidget(txt_edad);


        horizontalLayout_6->addLayout(horizontalLayout_7);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        lbl_cita = new QLabel(citasCalendar);
        lbl_cita->setObjectName(QString::fromUtf8("lbl_cita"));
        sizePolicy1.setHeightForWidth(lbl_cita->sizePolicy().hasHeightForWidth());
        lbl_cita->setSizePolicy(sizePolicy1);
        lbl_cita->setMaximumSize(QSize(150, 16777215));
        lbl_cita->setFont(font);

        horizontalLayout_11->addWidget(lbl_cita);

        time_horaCita = new QTimeEdit(citasCalendar);
        time_horaCita->setObjectName(QString::fromUtf8("time_horaCita"));
        time_horaCita->setEnabled(false);
        sizePolicy1.setHeightForWidth(time_horaCita->sizePolicy().hasHeightForWidth());
        time_horaCita->setSizePolicy(sizePolicy1);
        time_horaCita->setMaximumSize(QSize(16777215, 50));
        time_horaCita->setFont(font);

        horizontalLayout_11->addWidget(time_horaCita);


        horizontalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        lbl_turno = new QLabel(citasCalendar);
        lbl_turno->setObjectName(QString::fromUtf8("lbl_turno"));
        sizePolicy1.setHeightForWidth(lbl_turno->sizePolicy().hasHeightForWidth());
        lbl_turno->setSizePolicy(sizePolicy1);
        lbl_turno->setMaximumSize(QSize(70, 16777215));
        lbl_turno->setFont(font);

        horizontalLayout_12->addWidget(lbl_turno);

        txt_turno = new QLineEdit(citasCalendar);
        txt_turno->setObjectName(QString::fromUtf8("txt_turno"));
        txt_turno->setEnabled(false);
        sizePolicy1.setHeightForWidth(txt_turno->sizePolicy().hasHeightForWidth());
        txt_turno->setSizePolicy(sizePolicy1);
        txt_turno->setMaximumSize(QSize(16777215, 50));
        txt_turno->setFont(font);
        txt_turno->setEchoMode(QLineEdit::Normal);

        horizontalLayout_12->addWidget(txt_turno);


        horizontalLayout_3->addLayout(horizontalLayout_12);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);


        horizontalLayout_8->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        lbl_estado = new QLabel(citasCalendar);
        lbl_estado->setObjectName(QString::fromUtf8("lbl_estado"));
        sizePolicy1.setHeightForWidth(lbl_estado->sizePolicy().hasHeightForWidth());
        lbl_estado->setSizePolicy(sizePolicy1);
        lbl_estado->setMaximumSize(QSize(70, 16777215));
        lbl_estado->setFont(font);

        horizontalLayout_9->addWidget(lbl_estado);

        txt_estado = new QLineEdit(citasCalendar);
        txt_estado->setObjectName(QString::fromUtf8("txt_estado"));
        txt_estado->setEnabled(false);
        sizePolicy1.setHeightForWidth(txt_estado->sizePolicy().hasHeightForWidth());
        txt_estado->setSizePolicy(sizePolicy1);
        txt_estado->setMaximumSize(QSize(16777215, 50));
        txt_estado->setFont(font);

        horizontalLayout_9->addWidget(txt_estado);


        horizontalLayout_8->addLayout(horizontalLayout_9);


        verticalLayout->addLayout(horizontalLayout_8);

        tableView = new QTableView(citasCalendar);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMaximumSize(QSize(550, 350));
        tableView->setFont(font1);

        verticalLayout->addWidget(tableView);


        horizontalLayout->addLayout(verticalLayout);

        line = new QFrame(citasCalendar);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        calendarCitas = new QCalendarWidget(citasCalendar);
        calendarCitas->setObjectName(QString::fromUtf8("calendarCitas"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(calendarCitas->sizePolicy().hasHeightForWidth());
        calendarCitas->setSizePolicy(sizePolicy2);
        calendarCitas->setMinimumSize(QSize(400, 300));
        calendarCitas->setMaximumSize(QSize(550, 600));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        calendarCitas->setFont(font2);
        calendarCitas->setMinimumDate(QDate(1990, 1, 1));
        calendarCitas->setMaximumDate(QDate(2099, 12, 31));
        calendarCitas->setGridVisible(true);

        verticalLayout_2->addWidget(calendarCitas);

        pushButton = new QPushButton(citasCalendar);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);
        pushButton->setMaximumSize(QSize(16777215, 45));
        pushButton->setFont(font);

        verticalLayout_2->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(citasCalendar);

        QMetaObject::connectSlotsByName(citasCalendar);
    } // setupUi

    void retranslateUi(QWidget *citasCalendar)
    {
        citasCalendar->setWindowTitle(QCoreApplication::translate("citasCalendar", "Calendario de Citas", nullptr));
        lbl_paciente->setText(QCoreApplication::translate("citasCalendar", "<html><head/><body><p align=\"center\">Nombre Paciente:</p></body></html>", nullptr));
        lbl_dni->setText(QCoreApplication::translate("citasCalendar", "DNI:", nullptr));
        lbl_tel->setText(QCoreApplication::translate("citasCalendar", "Telefono:", nullptr));
        lbl_edad->setText(QCoreApplication::translate("citasCalendar", "Edad:", nullptr));
        lbl_cita->setText(QCoreApplication::translate("citasCalendar", "Hora de la Cita", nullptr));
        lbl_turno->setText(QCoreApplication::translate("citasCalendar", "Turno:", nullptr));
        lbl_estado->setText(QCoreApplication::translate("citasCalendar", "Estado:", nullptr));
        pushButton->setText(QCoreApplication::translate("citasCalendar", "Regresar al Men\303\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class citasCalendar: public Ui_citasCalendar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CITASCALENDAR_H
