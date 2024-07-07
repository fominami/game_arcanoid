#include <iostream>
#include <QSize>
#include "ball.h"


// Конструктор по умолчанию
Ball::Ball() {
    xdir = 1;
    ydir = -1;
    image.load("ball.jpg");
    QSize newSize(30, 30); // укажите желаемый размер
    image = image.scaled(newSize, Qt::KeepAspectRatio);

    rect = image.rect();
    resetState();
}

// Деструктор
Ball::~Ball() {}

// Сбрасывает положение мяча в начальное состояние
void Ball::resetState() {
    rect.moveTo(INITIAL_X, INITIAL_Y);
}

// Автоматическое перемещение мяча
void Ball::autoMove() {
    rect.translate(xdir, ydir);

    // Отскакивание от левой и правой границ
    if (rect.left() <= 0) {
        xdir = 1;
    }
    if (rect.right() >= RIGHT_EDGE) {
        xdir = -1;
    }

    // Отскакивание от верхней границы
    if (rect.top() <= 0) {
        ydir = 1;
    }

    // Мяч достигает нижней границы (игра завершается)
    if (rect.bottom() >= rect.bottom()) {
        // Здесь может быть код для завершения игры
    }
}

// Установка направления по оси X
void Ball::setXDir(int x) {
    xdir = x;
}

// Установка направления по оси Y
void Ball::setYDir(int y) {
    ydir = y;
}

// Получение направления по оси X
int Ball::getXDir() {
    return xdir;
}

// Получение направления по оси Y
int Ball::getYDir() {
    return ydir;
}

// Получение прямоугольника, представляющего мяч
QRect Ball::getRect() {
    return rect;
}

// Получение изображения мяча
QImage & Ball::getImage() {
    return image;
}
