#include <iostream>

using namespace std;
namespace poly
{
class RegularPolyhedron
{
private:
    int liczba_bokow_pods;
    float wysokosc_bryly;
    float dlugosc_boku_pods;
    float pole_pods;
public:
    RegularPolyhedron(int a, float b, float c, float d)
    {
        this->liczba_bokow_pods=a;
        this->wysokosc_bryly=b;
        this->dlugosc_boku_pods=c;
        this->pole_pods=d;
    }
    virtual void volume()
    {
        float x;
        return x;
    }
protected:
    void get_wysokosc()
    {
        return wysokosc_bryly;
    }
    void get_pole()
    {
        return pole_pods;
    }
};

class RegularPrism : public RegularPolyhedron
{
public:
    void volume()
    {
        return pole_pods*wysokosc_bryly;
    }

};

class RegularPyramid : public RegularPolyhedron
{
public:
    void volume()
    {
        return (pole_pods*wysokosc_bryly)/3;
    }
};
}
int main(int argc, char *argv[])
{
    RegularPolyhedron r=RegularPolyhedron(5,8.3,5.0,22.5);
    r.get_pole();
    r.get_wysokosc();
    return 0;
}
