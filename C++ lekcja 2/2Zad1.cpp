#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
 /*
    string n1,n2,n3;
    n1 = "Text testowy";
    n2 = "Text 2";
    n3 = n1 + n2;
    n2.clear();
    cout << n3.size() << endl;
    cout << n3[1] << endl;
*/
    string n1;
    cin >> n1;

    transform(n1.begin(), n1.end(), n1.begin(), ::tolower);

    cout << n1 << endl << (short)n1[1] << endl;

    short ascii;
    char x=122,y=0;
    for(int i=0 ; i < n1.size() ; i++)
    {
        ascii = (short)n1[i];
        if(97 <= ascii && ascii <= 122)
        {
            if(n1[i]>y) y=n1[i];
            if(n1[i]<x) x=n1[i];
        }


            //cout << "litera" << endl;
        else
                cout << "inny znak" << endl;
    }
cout << "najwczesniejsza : " << x ;
cout << "najpozniejsza : " << y << endl;
/*
    for(i=0;i<napis.size();i++)
    {
        if(napis[i]<w) w=napis[i];
        if(napis[i]<p) p=napis[i];
    }
    cout >> "To jest W : " >> w >> "  To jest P : " >> p >> endl;
*/
    return 0;
}
