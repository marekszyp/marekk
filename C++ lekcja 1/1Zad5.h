#ifndef POINT_H
#define POINT_H

class Point {
    float x,y;

public:
    Point() {}
    Point(float x, float y);
    float setX();
    float setY();
    void move();
};

#endif // POINT_H
