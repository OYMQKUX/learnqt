#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QLineEdit;
class QPushButton;
class QCloseEvent;
class QDialog;
class QLabel;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void newFile();
    bool Save();
    bool saveAs();
    bool ifsave();
    bool saveFile(const QString &fileName);
    //void Rename();
    bool LoadFile(const QString &fileName);

private slots:
    void on_actionNew_N_triggered();

    void on_actionSave_S_triggered();

    void on_actionSave_as_A_triggered();

    void on_actionCut_C_triggered();

    void on_actionCopy_C_triggered();

    void on_actionPaste_P_triggered();

    void on_actionUndo_U_triggered();

    void on_actionOpen_O_triggered();

    void on_actionClose_Q_triggered();

    void on_actionExit_E_triggered();

    void showFindText_back();

    void showFindText_front();

    void on_actionFind_F_triggered();

private:
    Ui::MainWindow *ui;
    bool isUntitled;
    QString curFile;
    QPushButton *Btn;
    QLineEdit *li, *findLineEdit;
    QDialog *findDlg;
    QLabel *statusLabel;

protected:
    void closeEvent(QCloseEvent *event);
};



#endif // MAINWINDOW_H
