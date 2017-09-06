#ifndef BATTLESHOW_H
#define BATTLESHOW_H

#include"abstractshow.h"
#include <QWidget>

namespace Ui {
class BattleShow;
}

class BattleShow : public AbstractShow
{
    Q_OBJECT

public:
    explicit BattleShow(AbstractShow *parent = 0);
    ~BattleShow();

private:
    Ui::BattleShow *ui;
};

#endif // BATTLESHOW_H
