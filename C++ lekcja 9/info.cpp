#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
using namespace std;


int main(int argc, char *argv[])
{

    //pushback wstawia wartosc na koniec wektora
    //[0,5,6,3]
    //pop_back(3) - kasuje z wektora wartosc 3 (Nie element trzeci !!!)
    // #include <vector>
    vector <int> v1;

    v1.push_back(0);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(3);


    //wyswietlanie wektora (jak z tablicy)
    for(int i = 0; i < v1.size(); i++)
            cout << v1[i] << endl;


cout << "-------------------" << endl;
// lista wskaznikowa w google
// //////////////////////// LISTA LISTA LISTA ////////////////
// wektor to taka lista jednokierunkowa
// #include <list>

    list <int> l1;
    l1.push_back(5);
    l1.push_back(6);
    l1.push_front(9);

            for(list <int>::iterator it = l1.begin(); it != l1.end(); it++)
                cout << *it << endl;

cout << "-------------------" << endl;
// ///////////////////// MAPA MAPA MAPA ////////////////////////
// mapa ma klucz wartosci (zamiast jednego elementu dostaje dwa)
// #include <map>

    map <string, int> m1;
    m1["test"] = 6;
    m1["inna"] = 8;

    cout << m1["test"] << endl;

cout << "--------------------" << endl;
// ///////////////////// SET SET SET //////////////////////
// jak mapa ale ma jeden element (klucz jest wartoscia)
// #include <set>

    set <string> s1;
    s1.insert("test");
    s1.insert("inna");
    s1.insert("dana");

    set <string>::iterator it2 = s1.find("inna");
    if(it2 != s1.end())
            cout << "Istnieje " << *it2 << endl;
    else
            cout << "Nie istnieje" << endl;

    return 0;
}
