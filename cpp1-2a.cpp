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
	void move(float x, float y)
	{
         this->x += x;
         this->y += y;
	}
};
int main(int argc, char *argv[])
{
	Point t = Point();
	t.setX(6.2);
	t.setY(7.3);
	t.move(0.1, 2.1);
	cout << "Punkt ma wartosci: "<<endl;
	cout << "( " << t.getX() << " ; " << t.getY()<< " )" << endl;
    return 0;
}

