#include <iostream>

using namespace std;

class Testowa
{
private:
    static int zmiennaStatyczna;
    int zmienna;
public:
    static int metoda()
    {
        cout<<zmiennaStatyczna<<endl;
        cout<<"Metoda statyczna"<<endl;
        //zmienna=5; //jest to b��dna modyfikacja
        return 3;
    }
};
int Testowa::zmiennaStatyczna=0;

int main(int argc, char *argv[])
{
    Testowa t1;
    Testowa t2;
    t1.metoda();
    t2.metoda();
    t1.metoda();
    t2.metoda();
    Testowa::metoda();

    return 0;
}
