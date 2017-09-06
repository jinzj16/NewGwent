#include "welcomeshow.h"
#include "ui_welcomeshow.h"


WelcomeShow::WelcomeShow(AbstractShow *parent) :
    AbstractShow(parent),
    ui(new Ui::WelcomeShow)
{
    ui->setupUi(this);
}

WelcomeShow::~WelcomeShow()
{
    delete ui;
}



