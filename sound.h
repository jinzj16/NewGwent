#ifndef SOUND_H
#define SOUND_H

#include <QObject>
#include <QMediaPlayer>
#include <QMediaPlaylist>

class Sound : public QObject
{
    Q_OBJECT
private:
    Sound();
    static Sound *sInstance;
    QMediaPlayer *player;
    QMediaPlaylist *playlist;

public:
    //新建播放器
    static Sound * ins();
    //播放音乐
    void play(const QString &source = QString());
    void playSound(const QString &source);
    //设置音量
    void setVolume(int volume);
    void stop();


signals:

public slots:
};

#endif // SOUND_H
