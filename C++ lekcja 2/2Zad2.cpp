#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string n1,n2;
    cin >> n1;
    cin >> n2;

    string::iterator itn2 = n2.begin();


    for(string::iterator itn1 = n1.begin() ; itn1 != n1.end() ; itn1++)
    {
        if(itn2 == n2.end())
            break;
        else if(*itn1 == *itn2)
            itn2++;
        else
            itn2 = n2.begin();
    }

    if(itn2 == n2.end())
        cout << "n1 zawiera n2" << endl;
    else
        cout << "n1 nie zawiera n2" << endl;


/*
    size_t found = n1.find(n2);
//    cout << found << endl;
    if(found>0)
           cout << "jest";
    else
           cout << "nie";
*/
    return 0;
}
