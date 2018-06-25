#include <iostream>

using namespace std;

struct Point { float x, y; };

template <typename T>
class SmartPointer {
    T *value;

public:
    SmartPointer(T *value) {
        this->value=value;
    }
    ~SmartPointer() {
        delete value;
    }
    T &operator *() {
        return *value;
    }
    T *operator->() {
        return value;
    }
};

int main() {
    SmartPointer<Point> ptr(new Point{1,2});
    cout << (*ptr).x << endl;
    return 0;
}
