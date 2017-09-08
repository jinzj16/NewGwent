#ifndef CARD_H
#define CARD_H

#include <QWidget>
#include<QString>
#include<QPixmap>
//用做卡牌的抽象基类
class Card : public QWidget
{
    Q_OBJECT
public:
    explicit Card(QWidget *parent = nullptr);
    //名称
    QString name;
    //战力
    int capacity;
    //位置
    int position;
    //图案
    QPixmap pix;
signals:


public slots:


};

#endif // CARD_H
