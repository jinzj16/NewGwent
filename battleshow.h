#ifndef BATTLESHOW_H
#define BATTLESHOW_H

#include"abstractshow.h"
#include <QWidget>
#include"mainshow.h"

namespace Ui {
class BattleShow;
}

class BattleShow : public QWidget
{
    Q_OBJECT

public:
    explicit BattleShow(QWidget *parent = 0);
    ~BattleShow();

private:
    Ui::BattleShow *ui;
};

#endif // BATTLESHOW_H
