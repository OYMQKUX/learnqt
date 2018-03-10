#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>
#include <QLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QCloseEvent>
#include <QDialog>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), isUntitled(true), curFile(tr("未命名.txt"))
{
    ui->setupUi(this);
    setWindowTitle(curFile);

    Btn = new QPushButton(this);
    li = new QLineEdit(this);

    Btn->setText(tr("Find"));

    QGridLayout *glayout = new QGridLayout(this);
    glayout->addWidget(Btn, 0, 0, 1, 1);
    glayout->addWidget(li, 0, 1, 1, 2);
    glayout->addWidget(ui->textEdit, 1, 0, 1, 3);
    ui->centralWidget->setLayout(glayout);

    findDlg = new QDialog(this);
    findDlg->setWindowTitle(tr("查找"));
    findLineEdit = new QLineEdit(findDlg);
    QPushButton *btn1 = new QPushButton(tr("查找上一个"), findDlg), *btn2 = new QPushButton(tr("查找下一个"), findDlg);
    QVBoxLayout *layout = new QVBoxLayout(findDlg);
    layout->addWidget(findLineEdit);
    layout->addWidget(btn1);
    layout->addWidget(btn2);
    connect(btn1, &QPushButton::clicked, this, &MainWindow::showFindText_back);
    connect(btn2, &QPushButton::clicked, this, &MainWindow::showFindText_front);

    statusLabel = new QLabel;
    statusLabel->setMinimumSize(150, 20);
    statusLabel->setFrameShape(QFrame::WinPanel);
    statusLabel->setFrameShadow(QFrame::Sunken);
    ui->statusBar->addWidget(statusLabel);
    statusLabel->setText(tr("Welcome to my notebook"));

    QLabel *permanent = new QLabel;
    permanent->setFrameStyle(QFrame::Box | QFrame::Sunken);
    permanent->setText(tr("<a href=\"http:www.qter.org\">qter.org</a>"));
    permanent->setTextFormat(Qt::RichText);
    permanent->setOpenExternalLinks(true);
    ui->statusBar->addPermanentWidget(permanent);

    //ui->statusBar->showMessage(tr("Override"));

    //connect(Btn, &QPushButton::clicked, this, &MainWindow::Rename);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newFile(){
    if(ifsave()){
        isUntitled = true;
        curFile = tr("未命名.txt");
        setWindowTitle(curFile);
        ui->textEdit->clear();
        ui->textEdit->setVisible(true);
    }
}

bool MainWindow::ifsave(){
    if(ui->textEdit->document()->isModified()){
        QMessageBox box;
        box.setWindowTitle(tr("警告"));
        box.setIcon(QMessageBox::Warning);
        box.setText(curFile + tr("尚未保存，是否保存？"));
        QPushButton *cancelBtn = box.addButton(tr("取消(&C)"), QMessageBox::RejectRole);
        QPushButton *noBtn = box.addButton(tr("否(&N)"), QMessageBox::NoRole);
        QPushButton *yesBtn = box.addButton(tr("是(&Y)"), QMessageBox::YesRole);
        box.exec();
        if(box.clickedButton() == yesBtn)
            return Save();
        else if(box.clickedButton() == cancelBtn)
            return false;
    }
    return true;
}

bool MainWindow::Save(){
    if(isUntitled)
        return saveAs();
    else return saveFile(curFile);
}

bool MainWindow::saveAs(){
    QString fileName = QFileDialog::getSaveFileName(this, tr("另存为"), curFile);
    if(fileName.isEmpty()) return false;
    return saveFile(fileName);
}

bool MainWindow::saveFile(const QString &fileName){
    QFile file(fileName);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, tr("多文档编辑器"), tr("无法写入文件 %1: \n %2").arg(fileName).arg(file.errorString()));
        return false;
    }
    QTextStream out(&file);
    QApplication::setOverrideCursor((Qt::WaitCursor));
    out << ui->textEdit->toPlainText();
    QApplication::restoreOverrideCursor();
    isUntitled = false;
    curFile = QFileInfo(fileName).canonicalFilePath();
    setWindowTitle(curFile);
    return true;
}

bool MainWindow::LoadFile(const QString &filename){
    QFile file(filename);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, tr("多文档编辑器"), tr("无法读取文件 %1:\n%2.").arg(filename).arg(file.errorString()));
        return false;
    }
    QTextStream in(&file);
    QApplication::setOverrideCursor(Qt::WaitCursor);
    ui->textEdit->setPlainText(in.readAll());
    QApplication::restoreOverrideCursor();
    curFile = QFileInfo(filename).canonicalFilePath();
    setWindowTitle(curFile);
    return false;
}

void MainWindow::closeEvent(QCloseEvent *event){
    if(ifsave()) event->accept();
    else event->ignore();
}


void MainWindow::on_actionNew_N_triggered()
{
    newFile();
}

void MainWindow::on_actionSave_S_triggered()
{
    Save();
}

void MainWindow::on_actionSave_as_A_triggered()
{
    saveAs();
}

void MainWindow::on_actionCut_C_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionCopy_C_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionPaste_P_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionUndo_U_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionOpen_O_triggered()
{
    if(ifsave()){
        QString filename = QFileDialog::getOpenFileName(this);
        if(!filename.isEmpty()){
            LoadFile(filename);
            ui->textEdit->setVisible(true);
        }
    }
}

void MainWindow::on_actionClose_Q_triggered()
{
    if(ifsave()){
        ui->textEdit->setVisible(false);
    }
}

void MainWindow::on_actionExit_E_triggered()
{
    if(!ifsave()) return;
    else qApp->quit();
}

void MainWindow::showFindText_back()
{
    QString str = findLineEdit->text();
    if(!ui->textEdit->find(str, QTextDocument::FindBackward)){
        QMessageBox::warning(this, tr("查找"), tr("找不到%1").arg(str));
    }
}

void MainWindow::showFindText_front()
{
    QString str = findLineEdit->text();
    if(!ui->textEdit->find(str)){
           QMessageBox::warning(this, tr("查找"), tr("找不到%1").arg(str));
    }
}

void MainWindow::on_actionFind_F_triggered()
{
    findDlg->show();
}
