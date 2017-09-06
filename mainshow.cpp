#include "mainshow.h"
#include"welcomeshow.h"
#include"sound.h"
#include<QMessageBox>
MainShow::MainShow(AbstractShow *parent)
    : AbstractShow(parent)
{
    mCurrentStateWidget = nullptr;
    //新建音乐播放器
    sound=Sound::ins();
    //开始的时候切换到欢迎页面
    switchState(Welcome);
    //设置窗口标题
    setWindowTitle(tr("Gwent"));
    //设置窗口图标及大小
    setWindowIcon(QIcon(":/show/image/smallicon.jpg"));
    setFixedSize(900, 600);

}

MainShow::~MainShow()
{

}

void MainShow::switchState(AbstractShow::GameState state)
{
    //切换并显示界面
    if (mCurrentStateWidget == nullptr || mGameState != state)
    {
        mGameState = state;//首先定义枚举类型
        delete mCurrentStateWidget;
        switch (state)
        {
        case Welcome:
            mCurrentStateWidget = new WelcomeShow(this);
            sound->play("qrc:/music/audio/welcome.mp3");
            break;
        //待添加其他窗口
        default:
            break;
        }
        mCurrentStateWidget->resize(900, 600);
        //信号链接及显示,将每个窗口发送的消息和主窗口的窗口变换消息链接
        connect(mCurrentStateWidget, SIGNAL(stateSet(AbstractShow::GameState)), this, SLOT(switchState(AbstractShow::GameState)));
        mCurrentStateWidget->show();
    }
}

//响应键盘信息
void MainShow::keyPressEvent(QKeyEvent * event)
{
    if(mGameState==Welcome)
       if((event->key()==Qt::Key_Return)||(event->key()==Qt::Key_Enter))
         QMessageBox::about(this,tr("待优化"),tr("此处实现开始游戏界面"));
}

//响应鼠标信息
void MainShow::mousePressEvent(QMouseEvent * event)
{
    if(mGameState==Welcome)
        if(event->button()==Qt::LeftButton)
         QMessageBox::about(this,tr("待优化"),tr("此处实现开始游戏界面"));

}




