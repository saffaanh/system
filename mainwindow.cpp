#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <addinfo.h>
#include <QMenuBar>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::button()
{
    QMessageBox msgbox;
    addInfo add;


    if (ui->userLine->text() == "" || ui->userPass->text() == ""){
        msgbox.setText("Please fill in your username and/or password!");
        msgbox.setWindowModality(Qt::ApplicationModal);
        msgbox.exec();
}
    else{
    if (ui->userLine->text() == "saff")
        if (ui->userPass->text() == "saff"){
            this->hide();
            add.exec();
       }

    if ((ui->userLine->text() != "saff") || (ui->userPass->text() != "saff")){
        msgbox.setText("Wrong username and/or password!");
        msgbox.setWindowModality(Qt::ApplicationModal);
        msgbox.exec();
        ui->userLine->clear();
        ui->userPass->clear();
    }
}

}

