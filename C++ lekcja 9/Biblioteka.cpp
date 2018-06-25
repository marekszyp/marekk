#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int mn(int a, int b);
int dod(int a, int b);

typedef int(*wskNaFunk)(int, int);

void weryf(int a, int b, wskNaFunk wf)
{
    if(wf(a,b) == 0)
        cout << "ZERO" << endl;
    else
        cout << "!ZERO" << endl;
}


int main(int argc, char *argv[])
{
/*
    vector <int> v1;
    v1.push_back(4);
    v1.push_back(2);
    v1.push_back(7);
    v1.push_back(1);

 //  sort(v1.begin(), v1.end()); <- sortowanie calego
 // sort(v1.begin(), v1.begin()+3); <- sortowanie pierwszych 3 elementow

    for(int i = 0; i < v1.size(); i++)
        cout << v1[i] << endl;

    int a = 7;
    int b = 11;

    swap(a,b);

    cout << a << b << endl;
cout << "----------------" << endl;
*/
    // WSK NA FUNKCJE


    weryf(a,b,dod);

    return 0;
}

int mn(int a, int b)
{
    return a * b;
}
int dod(int a, int b)
{
    return a + b;
}
