#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QAction *OpenAction = new QAction (tr("&Open"), this);
    QIcon icon(":/images/icon.icns");
    OpenAction->setIcon(icon);
    OpenAction->setShortcut(QKeySequence("⌘o"));
    ui->menuFile_F->addAction(OpenAction);

    QMenu *menuEdit_E = ui->menuBar->addMenu(tr("Edit(&E)"));
    QAction *UndoAction = new QAction (tr("&Undo"), this);
    UndoAction->setIcon(icon);
    UndoAction->setShortcut(QKeySequence("⌘E"));
    menuEdit_E->addAction(UndoAction);
}

MainWindow::~MainWindow()
{
    delete ui;
}
