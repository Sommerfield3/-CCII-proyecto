/********************************************************************************
** Form generated from reading UI file 'citascalendarpac.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CITASCALENDARPAC_H
#define UI_CITASCALENDARPAC_H

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

class Ui_citascalendarpac
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_57;
    QLabel *lbl_paciente_6;
    QLineEdit *txt_nombremed_6;
    QHBoxLayout *horizontalLayout_61;
    QLabel *lbl_especialidad_6;
    QLineEdit *txt_especialidad_6;
    QHBoxLayout *horizontalLayout_29;
    QHBoxLayout *horizontalLayout_30;
    QLabel *lbl_cita_6;
    QTimeEdit *time_horaCita_6;
    QHBoxLayout *horizontalLayout_31;
    QLabel *lbl_turno_6;
    QLineEdit *txt_turno_6;
    QHBoxLayout *horizontalLayout_58;
    QHBoxLayout *horizontalLayout_33;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_34;
    QLabel *lbl_estado_6;
    QLineEdit *txt_estado_6;
    QTableView *tableView_6;
    QFrame *line;
    QVBoxLayout *verticalLayout_13;
    QCalendarWidget *calendarCitas_6;
    QPushButton *pushButton_6;

    void setupUi(QWidget *citascalendarpac)
    {
        if (citascalendarpac->objectName().isEmpty())
            citascalendarpac->setObjectName(QString::fromUtf8("citascalendarpac"));
        citascalendarpac->resize(1024, 600);
        widget = new QWidget(citascalendarpac);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 1011, 581));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        horizontalLayout_57 = new QHBoxLayout();
        horizontalLayout_57->setObjectName(QString::fromUtf8("horizontalLayout_57"));
        lbl_paciente_6 = new QLabel(widget);
        lbl_paciente_6->setObjectName(QString::fromUtf8("lbl_paciente_6"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbl_paciente_6->sizePolicy().hasHeightForWidth());
        lbl_paciente_6->setSizePolicy(sizePolicy);
        lbl_paciente_6->setMaximumSize(QSize(150, 50));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        lbl_paciente_6->setFont(font);

        horizontalLayout_57->addWidget(lbl_paciente_6);

        txt_nombremed_6 = new QLineEdit(widget);
        txt_nombremed_6->setObjectName(QString::fromUtf8("txt_nombremed_6"));
        txt_nombremed_6->setEnabled(false);
        sizePolicy.setHeightForWidth(txt_nombremed_6->sizePolicy().hasHeightForWidth());
        txt_nombremed_6->setSizePolicy(sizePolicy);
        txt_nombremed_6->setMaximumSize(QSize(350, 50));
        QFont font1;
        font1.setPointSize(12);
        txt_nombremed_6->setFont(font1);

        horizontalLayout_57->addWidget(txt_nombremed_6);


        verticalLayout_12->addLayout(horizontalLayout_57);

        horizontalLayout_61 = new QHBoxLayout();
        horizontalLayout_61->setObjectName(QString::fromUtf8("horizontalLayout_61"));
        lbl_especialidad_6 = new QLabel(widget);
        lbl_especialidad_6->setObjectName(QString::fromUtf8("lbl_especialidad_6"));
        sizePolicy.setHeightForWidth(lbl_especialidad_6->sizePolicy().hasHeightForWidth());
        lbl_especialidad_6->setSizePolicy(sizePolicy);
        lbl_especialidad_6->setMaximumSize(QSize(150, 50));
        lbl_especialidad_6->setFont(font);

        horizontalLayout_61->addWidget(lbl_especialidad_6);

        txt_especialidad_6 = new QLineEdit(widget);
        txt_especialidad_6->setObjectName(QString::fromUtf8("txt_especialidad_6"));
        txt_especialidad_6->setEnabled(false);
        sizePolicy.setHeightForWidth(txt_especialidad_6->sizePolicy().hasHeightForWidth());
        txt_especialidad_6->setSizePolicy(sizePolicy);
        txt_especialidad_6->setMaximumSize(QSize(350, 50));
        txt_especialidad_6->setFont(font1);

        horizontalLayout_61->addWidget(txt_especialidad_6);


        verticalLayout_12->addLayout(horizontalLayout_61);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        lbl_cita_6 = new QLabel(widget);
        lbl_cita_6->setObjectName(QString::fromUtf8("lbl_cita_6"));
        sizePolicy.setHeightForWidth(lbl_cita_6->sizePolicy().hasHeightForWidth());
        lbl_cita_6->setSizePolicy(sizePolicy);
        lbl_cita_6->setMaximumSize(QSize(150, 16777215));
        lbl_cita_6->setFont(font);

        horizontalLayout_30->addWidget(lbl_cita_6);

        time_horaCita_6 = new QTimeEdit(widget);
        time_horaCita_6->setObjectName(QString::fromUtf8("time_horaCita_6"));
        time_horaCita_6->setEnabled(false);
        sizePolicy.setHeightForWidth(time_horaCita_6->sizePolicy().hasHeightForWidth());
        time_horaCita_6->setSizePolicy(sizePolicy);
        time_horaCita_6->setMaximumSize(QSize(16777215, 50));
        time_horaCita_6->setFont(font);

        horizontalLayout_30->addWidget(time_horaCita_6);


        horizontalLayout_29->addLayout(horizontalLayout_30);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        lbl_turno_6 = new QLabel(widget);
        lbl_turno_6->setObjectName(QString::fromUtf8("lbl_turno_6"));
        sizePolicy.setHeightForWidth(lbl_turno_6->sizePolicy().hasHeightForWidth());
        lbl_turno_6->setSizePolicy(sizePolicy);
        lbl_turno_6->setMaximumSize(QSize(70, 16777215));
        lbl_turno_6->setFont(font);

        horizontalLayout_31->addWidget(lbl_turno_6);

        txt_turno_6 = new QLineEdit(widget);
        txt_turno_6->setObjectName(QString::fromUtf8("txt_turno_6"));
        txt_turno_6->setEnabled(false);
        sizePolicy.setHeightForWidth(txt_turno_6->sizePolicy().hasHeightForWidth());
        txt_turno_6->setSizePolicy(sizePolicy);
        txt_turno_6->setMaximumSize(QSize(16777215, 50));
        txt_turno_6->setFont(font);
        txt_turno_6->setEchoMode(QLineEdit::Normal);

        horizontalLayout_31->addWidget(txt_turno_6);


        horizontalLayout_29->addLayout(horizontalLayout_31);


        verticalLayout_12->addLayout(horizontalLayout_29);

        horizontalLayout_58 = new QHBoxLayout();
        horizontalLayout_58->setObjectName(QString::fromUtf8("horizontalLayout_58"));
        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_33->addItem(horizontalSpacer_6);


        horizontalLayout_58->addLayout(horizontalLayout_33);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        lbl_estado_6 = new QLabel(widget);
        lbl_estado_6->setObjectName(QString::fromUtf8("lbl_estado_6"));
        sizePolicy.setHeightForWidth(lbl_estado_6->sizePolicy().hasHeightForWidth());
        lbl_estado_6->setSizePolicy(sizePolicy);
        lbl_estado_6->setMaximumSize(QSize(70, 16777215));
        lbl_estado_6->setFont(font);

        horizontalLayout_34->addWidget(lbl_estado_6);

        txt_estado_6 = new QLineEdit(widget);
        txt_estado_6->setObjectName(QString::fromUtf8("txt_estado_6"));
        txt_estado_6->setEnabled(false);
        sizePolicy.setHeightForWidth(txt_estado_6->sizePolicy().hasHeightForWidth());
        txt_estado_6->setSizePolicy(sizePolicy);
        txt_estado_6->setMaximumSize(QSize(16777215, 50));
        txt_estado_6->setFont(font);

        horizontalLayout_34->addWidget(txt_estado_6);


        horizontalLayout_58->addLayout(horizontalLayout_34);


        verticalLayout_12->addLayout(horizontalLayout_58);

        tableView_6 = new QTableView(widget);
        tableView_6->setObjectName(QString::fromUtf8("tableView_6"));
        tableView_6->setMaximumSize(QSize(550, 350));
        tableView_6->setFont(font1);

        verticalLayout_12->addWidget(tableView_6);


        horizontalLayout->addLayout(verticalLayout_12);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        calendarCitas_6 = new QCalendarWidget(widget);
        calendarCitas_6->setObjectName(QString::fromUtf8("calendarCitas_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(calendarCitas_6->sizePolicy().hasHeightForWidth());
        calendarCitas_6->setSizePolicy(sizePolicy1);
        calendarCitas_6->setMinimumSize(QSize(400, 300));
        calendarCitas_6->setMaximumSize(QSize(550, 600));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        calendarCitas_6->setFont(font2);
        calendarCitas_6->setMinimumDate(QDate(1990, 1, 1));
        calendarCitas_6->setMaximumDate(QDate(2099, 12, 31));
        calendarCitas_6->setGridVisible(true);

        verticalLayout_13->addWidget(calendarCitas_6);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy2);
        pushButton_6->setMaximumSize(QSize(16777215, 45));
        pushButton_6->setFont(font);

        verticalLayout_13->addWidget(pushButton_6);


        horizontalLayout->addLayout(verticalLayout_13);


        retranslateUi(citascalendarpac);

        QMetaObject::connectSlotsByName(citascalendarpac);
    } // setupUi

    void retranslateUi(QWidget *citascalendarpac)
    {
        citascalendarpac->setWindowTitle(QCoreApplication::translate("citascalendarpac", "Form", nullptr));
        lbl_paciente_6->setText(QCoreApplication::translate("citascalendarpac", "<html><head/><body><p align=\"center\">Nombre Medico:</p></body></html>", nullptr));
        lbl_especialidad_6->setText(QCoreApplication::translate("citascalendarpac", "<html><head/><body><p align=\"center\">Especialidad:</p></body></html>", nullptr));
        lbl_cita_6->setText(QCoreApplication::translate("citascalendarpac", "Hora de la Cita", nullptr));
        lbl_turno_6->setText(QCoreApplication::translate("citascalendarpac", "Turno:", nullptr));
        lbl_estado_6->setText(QCoreApplication::translate("citascalendarpac", "Estado:", nullptr));
        pushButton_6->setText(QCoreApplication::translate("citascalendarpac", "Regresar al Men\303\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class citascalendarpac: public Ui_citascalendarpac {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CITASCALENDARPAC_H
