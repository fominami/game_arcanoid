#include <QApplication>
#include "breakout.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Breakout window;

    window.resize(600, 800);
    window.setWindowTitle("Breakout");
    window.show();
    return a.exec();
}
