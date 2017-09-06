#include "battleshow.h"
#include "ui_battleshow.h"

BattleShow::BattleShow(AbstractShow *parent) :
    AbstractShow(parent),
    ui(new Ui::BattleShow)
{
    ui->setupUi(this);
}

BattleShow::~BattleShow()
{
    delete ui;
}
