#ifndef ADDINFO_H
#define ADDINFO_H

#include <QDialog>

namespace Ui {
    class addInfo;
}

class addInfo : public QDialog
{
    Q_OBJECT

public:
    explicit addInfo(QWidget *parent = 0);
    ~addInfo();

private:
    Ui::addInfo *ui;
};

#endif // ADDINFO_H
