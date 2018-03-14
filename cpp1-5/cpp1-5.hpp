#ifndef CPP1-5_HPP_INCLUDED
#define CPP1-5_HPP_INCLUDED

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

#endif // CPP1-5_HPP_INCLUDED
