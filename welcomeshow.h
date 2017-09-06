#ifndef WELCOMESHOW_H
#define WELCOMESHOW_H

#include"abstractshow.h"
#include"abstractshow.h"
#include <QWidget>


namespace Ui {
class WelcomeShow;
}

class WelcomeShow : public AbstractShow
{
    Q_OBJECT

public:
    explicit WelcomeShow(AbstractShow *parent = 0);
    ~WelcomeShow();

private:
    Ui::WelcomeShow *ui;

};

#endif // WELCOMESHOW_H
