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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_N;
    QAction *actionOpen_O;
    QAction *actionClose_C;
    QAction *actionQuit_Q;
    QAction *actionSave_S;
    QAction *actionSave_as_A;
    QAction *actionCopy_C;
    QAction *actionPaste_V;
    QAction *actionCut_X;
    QAction *actionUndo_Z;
    QAction *actionFind_F;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile_F;
    QMenu *menuEdit_E;
    QMenu *menuSearch;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(792, 594);
        actionNew_N = new QAction(MainWindow);
        actionNew_N->setObjectName(QStringLiteral("actionNew_N"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/myimage/resources/new.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_N->setIcon(icon);
        actionOpen_O = new QAction(MainWindow);
        actionOpen_O->setObjectName(QStringLiteral("actionOpen_O"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/myimage/resources/open.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_O->setIcon(icon1);
        actionClose_C = new QAction(MainWindow);
        actionClose_C->setObjectName(QStringLiteral("actionClose_C"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/myimage/resources/close.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose_C->setIcon(icon2);
        actionQuit_Q = new QAction(MainWindow);
        actionQuit_Q->setObjectName(QStringLiteral("actionQuit_Q"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/myimage/resources/exit.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit_Q->setIcon(icon3);
        actionSave_S = new QAction(MainWindow);
        actionSave_S->setObjectName(QStringLiteral("actionSave_S"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/myimage/resources/save.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_S->setIcon(icon4);
        actionSave_as_A = new QAction(MainWindow);
        actionSave_as_A->setObjectName(QStringLiteral("actionSave_as_A"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/myimage/resources/save_as.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as_A->setIcon(icon5);
        actionCopy_C = new QAction(MainWindow);
        actionCopy_C->setObjectName(QStringLiteral("actionCopy_C"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/myimage/resources/copy.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy_C->setIcon(icon6);
        actionPaste_V = new QAction(MainWindow);
        actionPaste_V->setObjectName(QStringLiteral("actionPaste_V"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/myimage/resources/paste.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste_V->setIcon(icon7);
        actionCut_X = new QAction(MainWindow);
        actionCut_X->setObjectName(QStringLiteral("actionCut_X"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/myimage/resources/cut.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut_X->setIcon(icon8);
        actionUndo_Z = new QAction(MainWindow);
        actionUndo_Z->setObjectName(QStringLiteral("actionUndo_Z"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/myimage/resources/undo.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo_Z->setIcon(icon9);
        actionFind_F = new QAction(MainWindow);
        actionFind_F->setObjectName(QStringLiteral("actionFind_F"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/myimage/resources/find.icns"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind_F->setIcon(icon10);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 792, 22));
        menuFile_F = new QMenu(menuBar);
        menuFile_F->setObjectName(QStringLiteral("menuFile_F"));
        menuEdit_E = new QMenu(menuBar);
        menuEdit_E->setObjectName(QStringLiteral("menuEdit_E"));
        menuSearch = new QMenu(menuBar);
        menuSearch->setObjectName(QStringLiteral("menuSearch"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile_F->menuAction());
        menuBar->addAction(menuEdit_E->menuAction());
        menuBar->addAction(menuSearch->menuAction());
        menuFile_F->addAction(actionNew_N);
        menuFile_F->addAction(actionOpen_O);
        menuFile_F->addAction(actionClose_C);
        menuFile_F->addAction(actionQuit_Q);
        menuFile_F->addSeparator();
        menuFile_F->addAction(actionSave_S);
        menuFile_F->addAction(actionSave_as_A);
        menuEdit_E->addAction(actionCut_X);
        menuEdit_E->addAction(actionCopy_C);
        menuEdit_E->addAction(actionPaste_V);
        menuEdit_E->addAction(actionUndo_Z);
        menuSearch->addAction(actionFind_F);
        mainToolBar->addAction(actionNew_N);
        mainToolBar->addAction(actionOpen_O);
        mainToolBar->addAction(actionClose_C);
        mainToolBar->addAction(actionQuit_Q);
        mainToolBar->addAction(actionSave_S);
        mainToolBar->addAction(actionSave_as_A);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCut_X);
        mainToolBar->addAction(actionCopy_C);
        mainToolBar->addAction(actionPaste_V);
        mainToolBar->addAction(actionUndo_Z);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFind_F);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_N->setText(QApplication::translate("MainWindow", "New(&N)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew_N->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen_O->setText(QApplication::translate("MainWindow", "Open(&O)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen_O->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionClose_C->setText(QApplication::translate("MainWindow", "Close(&C)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionClose_C->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionQuit_Q->setText(QApplication::translate("MainWindow", "Quit(&Q)", nullptr));
#ifndef QT_NO_TOOLTIP
        actionQuit_Q->setToolTip(QApplication::translate("MainWindow", "Quit(E)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionQuit_Q->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_S->setText(QApplication::translate("MainWindow", "Save(&S)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave_S->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_as_A->setText(QApplication::translate("MainWindow", "Save as(&A)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave_as_A->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        actionCopy_C->setText(QApplication::translate("MainWindow", "Copy(&C)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopy_C->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaste_V->setText(QApplication::translate("MainWindow", "Paste(&V)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPaste_V->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionCut_X->setText(QApplication::translate("MainWindow", "Cut(&X)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCut_X->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionUndo_Z->setText(QApplication::translate("MainWindow", "Undo(&Z)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUndo_Z->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionFind_F->setText(QApplication::translate("MainWindow", "Find(&F)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFind_F->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        menuFile_F->setTitle(QApplication::translate("MainWindow", "File(&F)", nullptr));
        menuEdit_E->setTitle(QApplication::translate("MainWindow", "Edit(&E)", nullptr));
        menuSearch->setTitle(QApplication::translate("MainWindow", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
