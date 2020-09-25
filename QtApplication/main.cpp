#include <string>
#include <QtCore>
#include <QtGui>

#define EXPORT __attribute__((visibility("default")))


extern "C" {
    EXPORT char *say(int a);
}

int argc = 0;
char *argv = 0;
QGuiApplication *app = 0;
std::string rs;

EXPORT char *say(int a)
{
   //app = new QGuiApplication(argc, &argv);

   rs = QString("I say %1").arg(a).toStdString();
   return (char*) rs.c_str();
}
