#include <iostream>

using namespace std;

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

class Caller {
private:
    typedef int (Callee::*callbackFunction)(int i);
    //typedef int(*MethodPointer)(int);

    callbackFunction cbf;
public:
    void connectCallback(callbackFunction cbf)
    {
        this->cbf = cbf;
    }
    void test(Callee * calle, int i)
    {
        int result = (calle->*cbf)(i);
        cout<<"Caller result "<< result << endl;
    }
};

int main(int argc, char *argv[])
{
    Caller caller;
    Callee callee(3);

    caller.connectCallback(&Callee::callbackFunction);
    caller.test(&callee, 2);

    callee.seti(4);
    caller.test(&callee, 2);

    return 0;
}
