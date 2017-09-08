#ifndef WELCOMESHOW_H
#define WELCOMESHOW_H

#include"abstractshow.h"
#include <QWidget>
#include"mainshow.h"


class WelcomeShow : public AbstractShow
{
    Q_OBJECT

public:
    explicit WelcomeShow(AbstractShow *parent = 0);


private:


};

#endif // WELCOMESHOW_H
