#include "logindlg.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    LoginDlg dlg;
    if(dlg.exec() == QDialog::Accepted){
        w.show();
        return a.exec();
    }
    return 0;
}
