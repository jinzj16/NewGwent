#ifndef WIDGET_H
#define WIDGET_H

#include"abstractshow.h"
#include <QWidget>
#include<QIcon>
#include<QCursor>
#include<QMessageBox>


//主界面
class MainShow : public AbstractShow
{
    Q_OBJECT

public:
    MainShow(AbstractShow *parent = 0);
    ~MainShow();
    //响应键盘及鼠标的函数
    void keyPressEvent(QKeyEvent * event);
    void mousePressEvent(QMouseEvent * event);
private:
    //实例化枚举类型
    GameState mGameState;
    //目前界面的句柄
    AbstractShow * mCurrentStateWidget;

public slots:
    //切换界面的信息
    void switchState(AbstractShow::GameState state);
    void newclose();

};

#endif // WIDGET_H
