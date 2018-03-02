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
};
int main(int argc, char *argv[])
{
	Point t = Point();
	t.set(8, 6);
	cout << "x = " << t.getX() << endl << "y = " << t.getY() << endl;
	return 0;
}

