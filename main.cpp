#include <iostream>
#include<math.h>
using namespace std;

class Point
{
private:
	float x;
	float y;
public:
	void set(float x, float y)
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
float dist(Point a, Point b)
{
    float dx = b.getX()-a.getX();
    float dy = b.getY()-a.getY();
    return sqrt(pow(dx, 2)+pow(dy, 2));

}
int main(int argc, char *argv[])
{
	Point a = Point();
	a.set(6.2, 5.4);
	Point b = Point();
	b.set(3.1, 1.8);
	cout << "Odleglosc miedzy punktami: "<<dist(a,b)<<endl;

    return 0;
}
