#include <iostream>

using namespace std;

template<typename Typ>
Typ mn(Typ l1, Typ l2)
{
    cout<<"Template"<<endl;
    return l1*l2;
}

template<>
string mn<string>(string l1, string l2)
{
    cout<<"Template specjalizacja"<<endl;
    return to_string(stod(l1)*stod(l2));
}

int main(int argc, char *argv[])
{
    cout<<mn<int>(1,2)<<endl;
    cout<<mn<double>(2.5,4.3);



    cout << mn<string>("2","8") << endl;

    return 0;
}
