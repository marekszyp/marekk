#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

typedef int(*wskNaFunk)(int, int);

void weryf(int a, int b, wskNaFunk wx, wskNaFunk wy)
{
    if(wx(a,b) == 0 && wy(a,b))
        cout << "ZERO" << endl;
    else
        cout << "!ZERO" << endl;
}


class Point{
public:
    float x,y;

    Point(float x, float y)
    {
        this->x = x;
        this->y = y;
    }
} ;

bool cmp(Point p1, Point p2)
{
    return p1.x < p2.x;
}




int main(int argc, char *argv[])
{

    vector <Point> v1;
    v1.push_back(Point(1.1,2.0));
    v1.push_back(Point(2.54,5.44));
    v1.push_back(Point(0.6,0.3));


    weryf(a,b,dod);

    return 0;
}

int mn(int a, int b)
{
    return a * b;
}
int dod(int a, int b)
{
    return a + b;
}
