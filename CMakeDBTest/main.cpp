#include "widget.h"
#include "login.h"
#include "menudoctor.h"
#include "citascalendar.h"
#include <QApplication>
#include <QDebug>
#include <QFile>
#include <QString>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Estableciendo estilo Ubuntu
    // C:/Users/Katia/Documents/QT Projects/SistemaCitasMedicas/src
    QFile stylesheetFile(QDir::currentPath()+"/Diffnes.qss");
    stylesheetFile.open(QFile::ReadOnly);
//    qDebug() << QDir::currentPath()+"/UbuntuCSS.qss";
    QString ss = QLatin1String(stylesheetFile.readAll());
    a.setStyleSheet(ss);

    Login l;
    l.show();
    return a.exec();
}
