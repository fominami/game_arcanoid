#include <iostream>
#include "brick.h"

Brick::Brick(int x, int y) {
    image.load("brickie.png");
    QSize newSize(40, 50); // укажите желаемый размер
    image = image.scaled(newSize, Qt::KeepAspectRatio);
    destroyed = false;
    rect = image.rect();
    rect.translate(x, y);
}

Brick::~Brick() {
    std::cout << ("Brick deleted") << std::endl;
}

QRect Brick::getRect() {
    return rect;
}

void Brick::setRect(QRect rct) {
    rect = rct;
}

QImage & Brick::getImage() {
    return image;
}

bool Brick::isDestroyed() {
    return destroyed;
}

void Brick::setDestroyed(bool destr) {
    destroyed = destr;
}
