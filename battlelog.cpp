#include "battlelog.h"
#include "ui_battle.h"

Battle::Battle(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Battle)
{
    ui->setupUi(this);
}

Battle::~Battle()
{
    delete ui;
}
