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
        void Exit();

private:
    Ui::MainWindow *ui;


private slots:
    void on_actionExit_triggered();
};

#endif // MAINWINDOW_H
