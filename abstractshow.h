#ifndef ABSTRACTSHOW_H
#define ABSTRACTSHOW_H

#include <QWidget>
#include<QMouseEvent>
#include<QKeyEvent>

#include"sound.h"

class AbstractShow : public QWidget
{
    Q_OBJECT
public:
    explicit AbstractShow(QWidget *parent = nullptr);
    //音乐句柄
    Sound * sound;
    //枚举游戏阶段
    enum GameState { Welcome, Playing, Choosing, AtuoPlaying };

signals:
    //每个界面都有发送消息的功能
    void stateSet(AbstractShow::GameState);


};

#endif // ABSTRACTSHOW_H
