#ifndef CHOOSINGSHOW_H
#define CHOOSINGSHOW_H

#include"abstractshow.h"
#include <QWidget>
#include"mainshow.h"

namespace Ui {
class ChoosingShow;
}

class ChoosingShow : public AbstractShow
{
    Q_OBJECT

public:
    explicit ChoosingShow(AbstractShow *parent = 0);
    ~ChoosingShow();

private slots:
    void on_QuitBtn_clicked();

signals:
    void QuitBtnClicked();

private:
    Ui::ChoosingShow *ui;


};

#endif // CHOOSINGSHOW_H
