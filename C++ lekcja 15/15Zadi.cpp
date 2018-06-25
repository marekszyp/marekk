#include <iostream>
#include <memory>

using namespace std;

class Klasa
{
private:
    static int nextId;
    int id;
public:
    Klasa() : id(++nextId)
    {
        cout << "Nowy obiekt o id "<<id<<endl;
    }
    ~Klasa()
    {
        cout << "Destruktor obiektu o id " << id<< endl;
    }
    int getId()
    {
        return id;
    }
    int test(int arg)
    {
        cout << "Metoda testowa obiektu o id " << id << endl;
        return arg + 8;
    }
};
/* pointery unique
class KlasaUsuwajaca
{
public:
    void operator()(Klasa *ptr)
    {
        cout << "Usuwam obiekt o id " << ptr->getId() << endl;
    }
};
*/

int Klasa::nextId = 0;

void ftestowa(shared_ptr<Klasa> ptrf)
{
    cout << "Funkcja testowa" << endl;
    cout << ptrf->test(0) << endl;
}

int main(int argc, char *argv[])
{
    /* pointery unique
    unique_ptr<Klasa, KlasaUsuwajaca> ptr(new Klasa);
    cout << ptr->test(3) << endl;
    ptr.reset(new Klasa);
    cout << (*ptr).getId() << endl;
    */

    // shared pointer
    shared_ptr<Klasa> ptr1(new Klasa);
   // shared_ptr<Klasa> ptr2(ptr1);
   // shared_ptr<Klasa> ptr3(ptr1);
    cout << ptr1->test(3) << endl;
   // cout << ptr2->test(8) << endl;
   // cout << ptr3->test(1) << endl;

    ftestowa(ptr1);
    cout <<"Koniec"<< endl;

    return 0;
}
