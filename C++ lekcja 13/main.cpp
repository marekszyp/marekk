#include <iostream>

using namespace std;

class Point
{
private:
    double x,y;

public:
    friend istream &operator>>(istream &input, Point &p);
    void showData()
    {
        cout<<x<<" "<<y<<endl;
    }
};

istream &operator>>(istream &input, Point &p)
{
    return input >> p.x >> p.y;
}

int main(int argc, char *argv[])
{
    Point p;
    cin >> p;
    p.showData();


    return 0;
}
