#include <iostream>

using namespace std;

class Point
{
private:
	float x;
	float y;
public:
	void setX(float x)
	{
		this->x = x;
	}
	void setY(float y)
	{
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
	t.setX(6.2);
	t.setY(7.3);
	Point z = Point();
	z.setX(0.2);
	z.setY(0.4);
	z.move(t);
	cout << "Punkt ma wartosci: "<<endl;
	cout << "( " << z.getX() << " ; " << z.getY()<< " )" << endl;
    return 0;
}

