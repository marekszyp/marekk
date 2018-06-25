#include <iostream>

using namespace std;

class Bazowa
{
public:
    Bazowa()
    {
        cout<<"Konstruktor bazowy"<<endl;
    }
    void metoda()
    {
        cout<<"Metoda bazowa"<<endl;
    }
    virtual ~Bazowa()
    {
        cout<<"Destruktor bazowy"<<endl;
    }
};
class Pochodna : public Bazowa
{
public:
    Pochodna()
    {
        cout<<"Konstruktor pochodny"<<endl;
    }
    void metoda()
    {
        cout<<"Metoda pochodna"<<endl;
    }
    virtual ~Pochodna()
    {
        cout<<"Destruktor pochodny"<<endl;
    }
};

int main(int argc, char *argv[])
{
    Bazowa *b=new Pochodna();
    b->metoda();
    delete b;
    return 0;
}
