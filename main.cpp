#include "projectcreator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProjectCreator w;
    w.show();

    return a.exec();
}
