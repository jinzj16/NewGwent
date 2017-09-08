#ifndef BATTLE_H
#define BATTLE_H

#include <QWidget>

namespace Ui {
class Battle;
}

class Battle : public QWidget
{
    Q_OBJECT

public:
    explicit Battle(QWidget *parent = 0);
    ~Battle();

private:
    Ui::Battle *ui;
};

#endif // BATTLE_H
