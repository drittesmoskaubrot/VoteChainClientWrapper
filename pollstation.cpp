#include "pollstation.h"
#include "ui_pollstation.h"

PollStation::PollStation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PollStation)
{
    ui->setupUi(this);
}

PollStation::~PollStation()
{
    delete ui;
}
