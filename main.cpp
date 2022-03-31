#include <QApplication>
#include <QTextEdit>
#include "widget.h"

int main(int argv, char** args)
{
    QApplication app(argv, args);
    Notepad wgt;
    wgt.show();

    return app.exec();
}