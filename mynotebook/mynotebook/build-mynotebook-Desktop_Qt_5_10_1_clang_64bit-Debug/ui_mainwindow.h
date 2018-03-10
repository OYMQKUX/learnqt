/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_N;
    QAction *actionOpen_O;
    QAction *actionSave_S;
    QAction *actionSave_as_A;
    QAction *actionCut_C;
    QAction *actionCopy_C;
    QAction *actionPaste_P;
    QAction *actionUndo_U;
    QAction *actionClose_Q;
    QAction *actionExit_E;
    QAction *actionFind_F;
    QAction *actionVersion;
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile_F;
    QMenu *menuEdit_E;
    QMenu *menuHelp_H;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(567, 464);
        actionNew_N = new QAction(MainWindow);
        actionNew_N->setObjectName(QStringLiteral("actionNew_N"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/myimages/resources/new.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_N->setIcon(icon);
        actionOpen_O = new QAction(MainWindow);
        actionOpen_O->setObjectName(QStringLiteral("actionOpen_O"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/myimages/resources/open.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_O->setIcon(icon1);
        actionSave_S = new QAction(MainWindow);
        actionSave_S->setObjectName(QStringLiteral("actionSave_S"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/myimages/resources/save.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_S->setIcon(icon2);
        actionSave_as_A = new QAction(MainWindow);
        actionSave_as_A->setObjectName(QStringLiteral("actionSave_as_A"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/myimages/resources/save_as.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as_A->setIcon(icon3);
        actionCut_C = new QAction(MainWindow);
        actionCut_C->setObjectName(QStringLiteral("actionCut_C"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/myimages/resources/cut.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut_C->setIcon(icon4);
        actionCopy_C = new QAction(MainWindow);
        actionCopy_C->setObjectName(QStringLiteral("actionCopy_C"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/myimages/resources/copy.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy_C->setIcon(icon5);
        actionPaste_P = new QAction(MainWindow);
        actionPaste_P->setObjectName(QStringLiteral("actionPaste_P"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/myimages/resources/paste.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste_P->setIcon(icon6);
        actionUndo_U = new QAction(MainWindow);
        actionUndo_U->setObjectName(QStringLiteral("actionUndo_U"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/myimages/resources/undo.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo_U->setIcon(icon7);
        actionClose_Q = new QAction(MainWindow);
        actionClose_Q->setObjectName(QStringLiteral("actionClose_Q"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/myimages/resources/close.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose_Q->setIcon(icon8);
        actionExit_E = new QAction(MainWindow);
        actionExit_E->setObjectName(QStringLiteral("actionExit_E"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/myimages/resources/exit.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit_E->setIcon(icon9);
        actionFind_F = new QAction(MainWindow);
        actionFind_F->setObjectName(QStringLiteral("actionFind_F"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/myimages/resources/find.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind_F->setIcon(icon10);
        actionVersion = new QAction(MainWindow);
        actionVersion->setObjectName(QStringLiteral("actionVersion"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 39, 551, 331));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 567, 22));
        menuFile_F = new QMenu(menuBar);
        menuFile_F->setObjectName(QStringLiteral("menuFile_F"));
        menuEdit_E = new QMenu(menuBar);
        menuEdit_E->setObjectName(QStringLiteral("menuEdit_E"));
        menuHelp_H = new QMenu(menuBar);
        menuHelp_H->setObjectName(QStringLiteral("menuHelp_H"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFile_F->menuAction());
        menuBar->addAction(menuEdit_E->menuAction());
        menuBar->addAction(menuHelp_H->menuAction());
        menuFile_F->addAction(actionNew_N);
        menuFile_F->addAction(actionOpen_O);
        menuFile_F->addSeparator();
        menuFile_F->addAction(actionSave_S);
        menuFile_F->addAction(actionSave_as_A);
        menuFile_F->addSeparator();
        menuFile_F->addAction(actionClose_Q);
        menuFile_F->addAction(actionExit_E);
        menuEdit_E->addAction(actionUndo_U);
        menuEdit_E->addSeparator();
        menuEdit_E->addAction(actionCut_C);
        menuEdit_E->addAction(actionCopy_C);
        menuEdit_E->addAction(actionPaste_P);
        menuHelp_H->addAction(actionFind_F);
        menuHelp_H->addSeparator();
        menuHelp_H->addAction(actionVersion);
        mainToolBar->addAction(actionNew_N);
        mainToolBar->addAction(actionOpen_O);
        mainToolBar->addAction(actionSave_S);
        mainToolBar->addAction(actionSave_as_A);
        mainToolBar->addAction(actionClose_Q);
        mainToolBar->addAction(actionExit_E);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCut_C);
        mainToolBar->addAction(actionCopy_C);
        mainToolBar->addAction(actionPaste_P);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFind_F);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_N->setText(QApplication::translate("MainWindow", "New(&N)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionNew_N->setStatusTip(QApplication::translate("MainWindow", "New File", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionNew_N->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen_O->setText(QApplication::translate("MainWindow", "Open(&O)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionOpen_O->setStatusTip(QApplication::translate("MainWindow", "Open File", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionOpen_O->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_S->setText(QApplication::translate("MainWindow", "Save(&S)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionSave_S->setStatusTip(QApplication::translate("MainWindow", "Save File", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionSave_S->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_as_A->setText(QApplication::translate("MainWindow", "Save_as(&A)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionSave_as_A->setStatusTip(QApplication::translate("MainWindow", "Save as New File", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionSave_as_A->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        actionCut_C->setText(QApplication::translate("MainWindow", "Cut(&X)", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCut_C->setToolTip(QApplication::translate("MainWindow", "Cut(X)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionCut_C->setStatusTip(QApplication::translate("MainWindow", "Cut", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionCut_C->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionCopy_C->setText(QApplication::translate("MainWindow", "Copy(&C)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionCopy_C->setStatusTip(QApplication::translate("MainWindow", "Copy", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionCopy_C->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaste_P->setText(QApplication::translate("MainWindow", "Paste(&P)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionPaste_P->setStatusTip(QApplication::translate("MainWindow", "Paste", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionPaste_P->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionUndo_U->setText(QApplication::translate("MainWindow", "Undo(&Z)", nullptr));
#ifndef QT_NO_TOOLTIP
        actionUndo_U->setToolTip(QApplication::translate("MainWindow", "Undo(Z)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionUndo_U->setStatusTip(QApplication::translate("MainWindow", "Undo", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionUndo_U->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionClose_Q->setText(QApplication::translate("MainWindow", "Close(&Q)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionClose_Q->setStatusTip(QApplication::translate("MainWindow", "Close", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionClose_Q->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_NO_SHORTCUT
        actionExit_E->setText(QApplication::translate("MainWindow", "Exit(&E)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionExit_E->setStatusTip(QApplication::translate("MainWindow", "Exit", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionExit_E->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionFind_F->setText(QApplication::translate("MainWindow", "Find(&F)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionFind_F->setStatusTip(QApplication::translate("MainWindow", "Find", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionFind_F->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionVersion->setText(QApplication::translate("MainWindow", "Version", nullptr));
        menuFile_F->setTitle(QApplication::translate("MainWindow", "File(&F)", nullptr));
        menuEdit_E->setTitle(QApplication::translate("MainWindow", "Edit(&E)", nullptr));
        menuHelp_H->setTitle(QApplication::translate("MainWindow", "Help(&H)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
