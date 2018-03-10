#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //std::cout << QMessageBox::YesRole << " " << QMessageBox::NoRole << " " << QMessageBox::RejectRole << std::endl;
    std::cout << argv[0] << std::endl;
    return a.exec();
}
