#include "mainshow.h"
#include"welcomeshow.h"
#include"sound.h"
#include"choosingshow.h"
#include"battleshow.h"
#include"quitdialog.h"

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
    //设置窗口图标
    setWindowIcon(QIcon(":/show/image/smallicon.jpg"));

}

MainShow::~MainShow()
{

}

void MainShow::switchState(AbstractShow::GameState state)
{
    //暂停播放之前的音乐
    if(sound!=nullptr)
        sound->stop();
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
        case Choosing:
            mCurrentStateWidget = new ChoosingShow(this);
            sound->play("qrc:/music/audio/choosing.mp3");
            connect(mCurrentStateWidget,SIGNAL(QuitBtnClicked()),this,SLOT(newclose()));
            break;



        default:
            break;
        }
        //信号链接及显示,将每个窗口发送的消息和主窗口的窗口变换消息链接
        connect(mCurrentStateWidget, SIGNAL(stateSet(AbstractShow::GameState)), this, SLOT(switchState(AbstractShow::GameState)));
        mCurrentStateWidget->show();
    }
}

//响应键盘信息
void MainShow::keyPressEvent(QKeyEvent * event)
{
    if((mGameState==Welcome)&&((event->key()==Qt::Key_Return)||(event->key()==Qt::Key_Enter)))
         mCurrentStateWidget->stateSet(AbstractShow::Choosing);

}

//响应鼠标信息
void MainShow::mousePressEvent(QMouseEvent * event)
{
    //单击左键进入游戏Choosing界面
    if(mGameState==Welcome&&event->button()==Qt::LeftButton)
           mCurrentStateWidget->stateSet(AbstractShow::Choosing);

}

//重载close函数
void MainShow::newclose()
{
    QuitDialog * quitdialog=new QuitDialog();
    quitdialog->show();
    connect(quitdialog,SIGNAL(YesButtonClicked()),this,SLOT(close()));
}




