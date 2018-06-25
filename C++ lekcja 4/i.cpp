#include <iostream>

using namespace std;

/*
void funkcja(double *wskaznik)
{
    *wskaznik=7;
}

int main()
{
    double *liczba;
    liczba=new double;
    *liczba=5;
    cout<<liczba<<" "<<*liczba<<endl;
    funkcja(liczba);
    cout<<liczba<<" "<<*liczba<<endl;
    delete liczba;
    cout<<liczba<<" "<<*liczba<<endl;

    return 0;
}
*/

class Villager
{
private:
    string *imie;
    unsigned wiek, maxwiek;
    bool plec;
public:
    Villager(string imie, unsigned wiek, unsigned maxwiek, bool plec)
    {
        this->imie=new string;
        *this->imie=imie;
        this->wiek=wiek;
        this->maxwiek=maxwiek;
        this->plec=plec;
    }

    Villager(const Villager &villager)
    {
        this->imie=new string;#include <iostream>

using namespace std;

class Villager
{
private:
    string *imie;
    unsigned wiek, maxwiek;
    bool plec;
public:
    Villager(string imie, unsigned wiek, unsigned maxwiek, bool plec)
    {
        this->imie=new string;
        *this->imie=imie;
        this->wiek=wiek;
        this->maxwiek=maxwiek;
        this->plec=plec;
    }

    Villager(const Villager &villager)
    {
        this->imie=new string;
        *this->imie=villager.getImie();
    }

    string getImie(string imie)
    {
        return *imie;
    }
    void setImie(string imie)
    {
        *this->imie=imie;
    }

};

int main()
{
    Villager v("Jan",8,80,true);
    Villager vCpy(v);
    cout<<v.getImie()<<" "<<vCpy.getImie()<<endl;
    vCpy.setImie("Pawel");

    return 0;
}
        *this->imie=villager.getImie();
    }

    string getImie(string imie)
    {
        return *imie;
    }
    void setImie(string imie)
    {
        *this->imie=imie;
    }

};

int main()
{
    Villager v("Jan",8,80,true);
    Villager vCpy(v);
    cout<<v.getImie()<<" "<<vCpy.getImie()<<endl;
    vCpy.setImie("Pawel");

    return 0;
}
