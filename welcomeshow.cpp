#include "welcomeshow.h"
#include<QLabel>
#include<QGridLayout>

WelcomeShow::WelcomeShow(AbstractShow *parent) :
    AbstractShow(parent)
{
    QGridLayout *layout=new QGridLayout(this);
    QLabel * label=new QLabel();
    label->setPixmap(QPixmap(":/show/image/welcomeform.png"));
    layout->addWidget(label);

}


