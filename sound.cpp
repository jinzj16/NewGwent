#include "sound.h"
#include <QSound>

Sound *Sound::sInstance = nullptr;

Sound::Sound()
{
    //新建播放器
    player = new QMediaPlayer(this);
    //设置音量
    player->setVolume(100);
    playlist = nullptr;
}

Sound * Sound::ins()
{
    //新建一个播放器
    if (sInstance == nullptr)
        sInstance = new Sound;
    return sInstance;
}

void Sound::play(const QString &source)
{
    delete playlist;
    //
    playlist = new QMediaPlaylist;
    //添加音乐列表
    playlist->addMedia(QUrl(source));
    //设置播放模式为循环播放
    playlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    if (!source.isEmpty())
        player->setPlaylist(playlist);
    player->play();
}

void Sound::playSound(const QString &source)
{
    QSound::play(source);
}

void Sound::stop()
{
    player->stop();
}
