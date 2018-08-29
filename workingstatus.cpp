#include "workingstatus.h"
#include "ui_workingstatus.h"

WorkingStatus::WorkingStatus(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WorkingStatus)
{
    ui->setupUi(this);
}

WorkingStatus::~WorkingStatus()
{
    delete ui;
}
