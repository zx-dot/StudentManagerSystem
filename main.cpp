#include <iostream>
#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    QFile file(":/style/style.qss");
    mainwindow w;
    w.show();
    return a.exec();
}
