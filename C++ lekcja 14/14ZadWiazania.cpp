#include <iostream>

using namespace std;

int add(int first, int second)
{
    return first + second;
}

int mul(int first)
{
    return first * 5;
}

int main(int argc, char *argv[])
{
    auto add_obj = bind(&add, placeholders::_1, placeholders::_2);
    cout << add_obj(1,5)<<endl;

    auto test = bind(&mul, bind(&add, placeholders::_1, placeholders::_2));
    cout<<test(1,4)<<endl;

    return 0;
}
