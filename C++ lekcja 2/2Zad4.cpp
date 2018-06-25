#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{

    ifstream plik;
    string n1;
    string n2;
cin >> n2;

    plik.open("/Users/student/desktop/pob/2Zad4/2Zad4.txt");
    while(getline(plik,n1))
        cout << n1 << endl;

    return 0;
}
