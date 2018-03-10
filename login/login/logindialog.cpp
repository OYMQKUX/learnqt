#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->pwdlineEdit->setEchoMode(QLineEdit::Password);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginButton_clicked()
{
    if(ui->usrlineEdit->text().trimmed() == tr("OYMQKUX") && ui->pwdlineEdit->text() == tr("zhang.1996")){
        accept();
    }
    else{
        QMessageBox::warning(this, tr("警告"), tr("用户名或密码错误"), QMessageBox::Yes);
        ui->usrlineEdit->clear();
        ui->pwdlineEdit->clear();
        ui->usrlineEdit->setFocus();
    }
}
