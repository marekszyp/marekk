#include <iostream>
#include "1Zad5.h"

using namespace std;

float distance(Point x, Point y)
{
    float s = x.y()-y.x();
    return s;
}


int main(int argc, char *argv[])
{
    Point p = Point(4 , 10);
    cout << " X : " << x() << endl;
    cout << " Y : " << y() << endl;

    cout << "Odleglosc : " << distance(p,p) << endl;
    return 0;
}
