#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QLineEdit;
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
    bool ifnotcancel();
    void save();
    void saveas();
    void savefile(QString &);
    void loadFile(QString &);
    void find_back();
    void find_front();
    void closeEvent(QCloseEvent *);
    void update_word_count();

private slots:
    void on_actionNew_N_triggered();

    void on_actionOpen_O_triggered();

    void on_actionClose_C_triggered();

    void on_actionQuit_Q_triggered();

    void on_actionSave_S_triggered();

    void on_actionCopy_C_triggered();

    void on_actionSave_as_A_triggered();

    void on_actionPaste_V_triggered();

    void on_actionCut_X_triggered();

    void on_actionUndo_Z_triggered();

    void on_actionFind_F_triggered();

private:
    Ui::MainWindow *ui;
    QString filename;
    bool isUntitled;
    QDialog *findDlg;
    QLineEdit *findLindeEdit;
    QLabel *word_count;
};

#endif // MAINWINDOW_H
