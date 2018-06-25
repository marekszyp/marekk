#include <iostream>

using namespace std;

class Villager
{
private:
    string *imie;
    unsigned wiek, maxwiek;
    bool plec;
    string namesM[3]={"Jacek", "Jan", "Mateusz"};
    string namsesK[3]={"Kasia", "Ola", "Agata"};
public:
    Villager(string imie, unsigned wiek, unsigned maxwiek, bool plec)
    {
        this->imie=new string;
        *this->imie=imie;
        this->wiek=wiek;
        this->maxwiek=maxwiek;
        this->plec=plec;
    }

    Villager()
    {
        this->imie=new string;
        srand(time(NULL));
        plec=rand()%2;
        maxwiek=rand()%100;
        wiek=rand()%maxwiek;
        if(plec)
            *imie=namesM[rand()%3];
        else
            *imie=namesK[rand()%3];

        cout<<*imie<<" "<<wiek<<" "<<maxwiek<<" "<<plec<<endl;
    }

    Villager(string imie, unsigned wiek, unsigned maxwiek)
    {
        this->imie=new string;
        this->imie=imie;
        this->wiek=new unsigned;
        this->wiek=wiek;
        this->maxwiek=new unsigned;
        this->maxwiek=maxwiek;
        cout<<imie<<" "<<wiek<<" "<<maxwiek<<endl;
    }

    void zwiekszwiek()
    {
        wiek++;
        if(wiek==maxwiek)
            delete this;
    }
    ~Villager()
    {
        cout<<"Umiera "<<*imie<<" "<<wiek<<endl;
        delete this->imie;
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
    Villager("Adam",47,97);
    Villager *v=new Villager("Jan",1,3,true);
    delete v;

    return 0;
}
