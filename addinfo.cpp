#include "addinfo.h"
#include "ui_addinfo.h"

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
