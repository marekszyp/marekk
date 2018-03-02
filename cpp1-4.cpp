#include <iostream>

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
	void move(Point z)
	{
         this->x += z.getX();
         this->y += z.getY();
	}
};
int main(int argc, char *argv[])
{
	Point t = Point();
	t.set(6.2, 5.4);
	Point z = Point();
	z.set(0.7, 1.4);
	z.move(t);
	cout << "Punkt ma wartosci: "<<endl;
	cout << "( " << z.getX() << " ; " << z.getY()<< " )" << endl;
    return 0;
}
