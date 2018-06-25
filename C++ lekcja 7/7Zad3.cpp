#include <iostream>

using namespace std;

class Person
{
protected:
    string name;
public:
    Person(string name)
    {
        this->name=name;
    }

    void ident()
    {
        cout<<name<<endl;
    }
};

class Teacher //: public Person - Wymagana modyfikacja kodu
{
private:
    string title;
public:
    Teacher(string title)
    {
        this->title=title;
    }
    void ident()
    {
        cout<<title<<endl;
    }
};

class Student
{
public:
    int semester;
    Student(int s)
    {
        this->semester=s;
    }
    void ident()
    {
        cout<<semester<<endl;
    }
};

int main(int argc, char *argv[])
{
    Person p=Person("Marek");
    Teacher t=Teacher("Student");
    Student s=Student(3);
    p.ident();
    t.ident();
    s.ident();
    return 0;
}
