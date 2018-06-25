#include <iostream>

using namespace std;
/*
int mn(int l1, int l2)
{
    cout<<"int"<<endl;
    return l1*l2;
}

double mn(double l1, double l2)
{
    cout<<"double"<<endl;
    return l1*l2;
}
*/
template<typename Typ>
Typ mn(Typ l1, Typ l2)
{
    cout<<"Template"<<endl;
    return l1*l2;
}


int main(int argc, char *argv[])
{
    cout<<mn<int>(1,2)<<endl;
    cout<<mn<double>(2.5,4.3);

    cout << endl;
    cout << endl;

    int tab[4]={1,2,3,4};
    int &w = mn(tab[0],tab[0+4]);
    cout << w << endl;

    return 0;
}
