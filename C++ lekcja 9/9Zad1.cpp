#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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

    for(int i=0; i < v1.size(); i++)
            cout << v1[i].x << " " << v1[i].y << endl;

    cout << "-------------" << endl;


    sort(v1.begin(), v1.end(), cmp);
    for(int i=0; i < v1.size(); i++)
            cout << v1[i].x << " " << v1[i].y << endl;

    return 0;
}
