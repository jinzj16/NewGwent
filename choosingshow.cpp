#include "choosingshow.h"
#include "ui_choosingshow.h"
#include<QMessageBox>
ChoosingShow::ChoosingShow(AbstractShow *parent) :
    AbstractShow(parent),
    ui(new Ui::ChoosingShow)
{
    ui->setupUi(this);
}

ChoosingShow::~ChoosingShow()
{
    delete ui;
}

void ChoosingShow::on_QuitBtn_clicked()
{
   emit QuitBtnClicked();
}
