#include "battleshow.h"
#include "ui_battleshow.h"

BattleShow::BattleShow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BattleShow)
{
    ui->setupUi(this);
}

BattleShow::~BattleShow()
{
    delete ui;
}
