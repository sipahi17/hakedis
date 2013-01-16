#include "hakedis.h"
#include "ui_hakedis.h"

Hakedis::Hakedis(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Hakedis)
{
    ui->setupUi(this);
}

Hakedis::~Hakedis()
{
    delete ui;
}
