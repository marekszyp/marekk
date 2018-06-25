#include <iostream>
#include <vector>

using namespace std;

void funkcja(vector<int> &a, int *max, int *min)
{
    replace_if(a.begin(),a.end(),[min, max](int valude) { return !(value>*min&&value<*max); },0);
}

int main(int argc, char *argv[])
{
    vector<int> a;
    for(int i=0; i<5; i++)
        a.push_back(i+1);
    int min=2, max=5;

    funkcja(a, &max, &min);

    auto fnk_obj = bind(&funkcja, placeholders::_1, &max, &min);
    fnk_obj(a);

    for(int i:a)
        cout<<i<<" ";

    min = 3;
    fnk_obj(a);
    for(int i:a)
        cout<<i<<" ";

    return 0;
}
