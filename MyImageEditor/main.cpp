#include "MyImageEditor.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyImageEditor w;
    w.show();
    return a.exec();
}
