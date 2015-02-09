#include <QtCore/QCoreApplication>
#include <QString>
#include <QTextStream>
 
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString str;
    str = "AAA:";
    QTextStream in(stdin);
    QTextStream out(stdout);
    out << str;
    in >> str;
    out << str;
	out.flush();

    return 0;
}
