#ifndef BALL_H
#define BALL_H
#pragma once

#include <QImage>
#include <QRect>

class Ball {

public:
    Ball();
    ~Ball();

public:
    void resetState();
    void autoMove();
    void setXDir(int);
    void setYDir(int);
    int getXDir();
    int getYDir();
    QRect getRect();
    QImage & getImage();

private:
    int xdir;
    int ydir;
    QImage image;
    QRect rect;
    static const int INITIAL_X = 250;
    static const int INITIAL_Y = 475;
    static const int RIGHT_EDGE = 500;
};
#endif // BALL_H
