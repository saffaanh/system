#include "addinfo.h"
#include "ui_addinfo.h"
#include "mainwindow.h"

addInfo::addInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addInfo)
{
    ui->setupUi(this);
}

addInfo::~addInfo()
{
    delete ui;
}

void addInfo::accept()
{
   ui->firstLine->clear();
   ui->surnameLine->clear();
   ui->holidayLine->clear();
   ui->mobileLine->clear();
   ui->vehicleLine->clear();
}

void addInfo::reject()
{
   ui->firstLine->clear();
   ui->surnameLine->clear();
   ui->holidayLine->clear();
   ui->mobileLine->clear();
   ui->vehicleLine->clear();
}

void addInfo::exitapp()
{
   exit(0);
}

