#include <iostream>

using namespace std;

class Point
{
private:
    float x;
    float y;
public:
    Point(float x, float y)
    {
        this->x = x;
        this->y = y;
    }

    float getX()
    {
        return x;
    }

    float getY()
    {
        return y;
    }
};

int main(int argc, char *argv[])
{
    Point p = Point(2.1 , 3.5);
    cout << " X : " << p.getX() << endl;
    cout << " Y : " << p.getY() << endl;
    return 0;
}
