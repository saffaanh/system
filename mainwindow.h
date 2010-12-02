#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
        void button();

private:
    Ui::MainWindow *ui;


private slots:
    void on_actionLogin_activated();
    void on_actionLogin_triggered();
    void on_actionExit_triggered();
};

#endif // MAINWINDOW_H
