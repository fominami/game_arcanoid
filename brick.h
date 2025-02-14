#ifndef BRICK_H
#define BRICK_H
#pragma once

#include <QImage>
#include <QSize>
#include <QRect>

class Brick {

public:
    Brick(int, int);
    ~Brick();

public:
    bool isDestroyed();
    void setDestroyed(bool);
    QRect getRect();
    void setRect(QRect);
    QImage & getImage();

private:
    QImage image;
    QRect rect;
    bool destroyed;
};
#endif // BRICK_H
