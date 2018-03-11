#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>
#include <QPushButton>
#include <QLineEdit>
#include <QDialog>
#include <QCloseEvent>
#include <QTimer>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), filename(tr("未命名.txt")), isUntitled(true),
    findDlg(new QDialog(this)), findLindeEdit(new QLineEdit(findDlg))
{
    ui->setupUi(this);

    findDlg->setWindowTitle(tr("查找"));
    QPushButton *btn1 = new QPushButton(tr("查找上一个"), findDlg);
    QPushButton *btn2 = new QPushButton(tr("查找下一个"), findDlg);
    QVBoxLayout *layout = new QVBoxLayout(findDlg);
    layout->addWidget(findLindeEdit);
    layout->addWidget(btn1);
    layout->addWidget(btn2);
    connect(btn1, &QPushButton::clicked, this, &MainWindow::find_back);
    connect(btn2, &QPushButton::clicked, this, &MainWindow::find_front);

    word_count = new QLabel;
    word_count->setMinimumSize(150, 20);
    word_count->setFrameShape(QFrame::WinPanel);
    word_count->setFrameShadow(QFrame::Sunken);
    ui->statusBar->addWidget(word_count);
    QTimer *timer = new QTimer(this);
    timer->start(0);
    connect(timer, &QTimer::timeout, this, &MainWindow::update_word_count);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newFile()
{
    if(ifnotcancel()){
        isUntitled = true;
        filename = tr("未命名.txt");
        setWindowTitle(filename);
        ui->textEdit->clear();
        ui->textEdit->setVisible(true);
    }
}
//判断是否cancel，如果不是处理是否保存
bool MainWindow::ifnotcancel()
{
    if(ui->textEdit->document()->isModified()){
        QMessageBox box;
        QPushButton *yesBtn = box.addButton(tr("是(&Y)"), QMessageBox::YesRole);
        QPushButton *noBtn = box.addButton(tr("否(&N)"), QMessageBox::NoRole);
        QPushButton *cancelBtn = box.addButton(tr("取消(&C)"), QMessageBox::RejectRole);
        box.setWindowTitle(tr("警告"));
        box.setText(tr("%1尚未保存，是否需要保存？").arg(filename));
        box.exec();
        if(box.clickedButton() == cancelBtn)
            return false;
        else {
            if(box.clickedButton() == yesBtn){
                save();
            }
            return true;
        }
    }
    return true;
}

void MainWindow::save()
{
    if(isUntitled)//如果未起标题则相当于save_as
        saveas();
    else
        savefile(filename);
}

void MainWindow::saveas()
{
    QString name = QFileDialog::getSaveFileName(this, tr("另存为"), filename);
    if(name.isNull()) name = tr("Untitled"); //标题为空
    savefile(name);
}

void MainWindow::savefile(QString &name)
{
    QFile file(name);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, tr("多文档编辑器"), tr("无法读取文件%1 : \n%2").arg(filename).arg(file.errorString()));
        return;
    }
    QTextStream out(&file);
    QApplication::setOverrideCursor(Qt::WaitCursor);//设置等待鼠标信号
    out << ui->textEdit->toPlainText();
    QApplication::restoreOverrideCursor();
    filename = QFileInfo(name).canonicalFilePath();
    setWindowTitle(filename);
    isUntitled = false;
}

void MainWindow::loadFile(QString &name)
{
    QFile file(name);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, tr("多文档编辑器"), tr("文件%1无法打开:\n%2").arg(name).arg(file.errorString()));
        return;
    }
    filename = QFileInfo(name).canonicalFilePath();
    QTextStream in(&file);
    QApplication::setOverrideCursor(Qt::WaitCursor);
    ui->textEdit->setPlainText(in.readAll());
    QApplication::restoreOverrideCursor();
    setWindowTitle(filename);
    isUntitled = false;
}

void MainWindow::find_back()
{
    QString str = findLindeEdit->text();
    if(!ui->textEdit->find(str, QTextDocument::FindBackward))
        QMessageBox::warning(this, tr("查找"), tr("找不到%1").arg(str));
}

void MainWindow::find_front()
{
    QString str = findLindeEdit->text();
    if(!ui->textEdit->find(str))
        QMessageBox::warning(this, tr("查找"), tr("找不到%1").arg(str));
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if(ifnotcancel()) event->accept();
    else event->ignore();
}

void MainWindow::update_word_count()
{
    word_count->setText(tr("Word count: ") + QString::number(ui->textEdit->toPlainText().length()));
}

void MainWindow::on_actionNew_N_triggered()
{
    newFile();
}

void MainWindow::on_actionOpen_O_triggered()
{
    if(ifnotcancel()){
        QString name = QFileDialog::getOpenFileName(this);
        if(!name.isEmpty()){
            loadFile(name);
            ui->textEdit->setVisible(true);
        }
    }
}

void MainWindow::on_actionClose_C_triggered()
{
    if(ifnotcancel()){
        ui->textEdit->setVisible(false);
    }
}

void MainWindow::on_actionQuit_Q_triggered()
{
    if(ifnotcancel()) qApp->quit();
    else return;
}

void MainWindow::on_actionSave_S_triggered()
{
    save();
}

void MainWindow::on_actionCopy_C_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionSave_as_A_triggered()
{
    saveas();
}

void MainWindow::on_actionPaste_V_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionCut_X_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionUndo_Z_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionFind_F_triggered()
{
    findDlg->show();
}
