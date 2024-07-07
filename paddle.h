#ifndef PADDLE_H
#define PADDLE_H

#pragma once

#include <QImage>
#include <QSize>
#include <QRect>

class Paddle {

public:
    Paddle();
    ~Paddle();

public:
    void resetState();
    void move();
    void setDx(int);
    QRect getRect();
    QImage & getImage();

private:
    QImage image;
    QRect rect;
    int dx;
    static const int INITIAL_X = 250;
    static const int INITIAL_Y = 500;
};
#endif // PADDLE_H
