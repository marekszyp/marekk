#include <iostream>

#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array {
    unsigned int m_size;
    T *arr;
public:

    class Iterator
    {
        T* head;
    public:
        Iterator& operator=(Array<T>& other)
        {
            head = &other[0];
            return *this;
        }
        Iterator& operator++()
        {
            head++;
            return *this;
        }
        T& operator*()
        {
            return *head;
        }
    };

    Array(int size);
    ~Array();
    int size();
    T& operator[](int index);
};

template <typename T>
Array<T>::Array(int size) {
    this->m_size=size;
    this->arr=new T[size];
    for(int i = 0; i < size; i++)
        this->arr[i]=i;
}

template <typename T>
Array<T>::~Array() {
    delete [] arr;
}

template <typename T>
int Array<T>::size() {
    return m_size;
}

template <typename T>
T& Array<T>::operator[](int index) {
    return arr[index];
}


#endif // ARRAY_H
using namespace std;

int main(int argc, char *argv[])
{
    Array<int> a(15);
    Array<int>::Iterator it;
    it = a;
    cout<<*it<<endl;
    ++it;
    cout<<*it<<endl;

    return 0;
}
