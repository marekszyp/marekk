#include <iostream>
#include <functional>

using namespace std;

typedef function<int(int)> CallbackFunction;

class Caller {
private:
    CallbackFunction cbf;
public:
    void connectCallback(CallbackFunction cbf)
    {
        this->cbf = cbf;
    }
    void test(int i)
    {
        int result = cbf(i);
        cout<<"Caller result "<< result <<endl;
    }
};

class Callee {
private:
    int i;
public:
    Callee(int i)
    {
        this->i = i;
    }
    int callbackFunction(int i)
    {
        cout << "Callee input "<<endl;
        return this->i * i;
    }
    void seti(int i)
    {
        this->i = i;
    }
};

int main(int argc, char *argv[])
{
    Caller caller;
    Callee callee(3);

    caller.connectCallback([&callee](int i) {return callee.callbackFunction(i);});
    caller.test(2);

    callee.seti(4);
    caller.test(2);
    return 0;
}
