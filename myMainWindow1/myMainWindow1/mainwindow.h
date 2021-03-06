#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QLineEdit;
class QPushButton;
class QCloseEvent;

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
    void on_action_New_triggered();

    void on_action_Save_triggered();

    void on_action_Save_As_triggered();

    void on_action_Open_triggered();

    void on_action_Close_triggered();

    void on_action_Exit_triggered();

    void on_action_Undo_triggered();

    void on_action_Cut_triggered();

    void on_action_Copy_triggered();

    void on_action_Paste_triggered();

private:
    Ui::MainWindow *ui;
    bool isUntitled;
    QString curFile;
    QPushButton *Btn;
    QLineEdit *li;

protected:
    void closeEvent(QCloseEvent *event);
};



#endif // MAINWINDOW_H
