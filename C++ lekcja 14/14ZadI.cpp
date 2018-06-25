#include <iostream>

using namespace std;

class Klasa
{
public:
    int count(int i)
    {
        return i * 2;
    }
};

int main(int argc, char *argv[])
{
    Klasa obiekt;

    cout << []()->int{return 1;}() << endl;

    cout << [](int a, int b)->int {return a+b;}(1,2) << endl;

    cout << [&obiekt](int a)->int {return obiekt.count(a);}(8) << endl;

    auto lmbd = [](int a, int b)-> int {return a+b;};
    cout << lmbd(8,9) << endl;
    cout << lmbd(1,10) << endl;

    return 0;
}
