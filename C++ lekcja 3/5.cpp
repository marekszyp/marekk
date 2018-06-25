#include <iostream>
#include <cstdbool>
using namespace std;

class User
{
protected:
    string login, password;
public:
    User(string login, string password)
    {
        this->login = login;
        this->password = password;
    }
    bool authorize(string login, string password)
    {
       if(this->login == login && this->password == password)
           return true;
       return false;
    }

};
class Student : public User
{
private:
    int semestr;

public:
    Student(string login, string password, int semestr) : User(login, password), semestr(semestr) {}

    void setSemestr(int semestr)
    {
        this->semestr=semestr;
    }
    int getSemestr()
    {
        return this->semestr;
    }
};
class Subject
{
private:
    Student *stud;
public:
    Subject(Student *stud)
    {
        this->stud=stud;
    }
    void test()
    {
        cout<<stud->getSemestr()<<endl;
    }
};


int main(int argc, char *argv[])
{

    Student student("log", "pass", 3);
    Subject sbj(&student);
    sbj.test();
    student.setSemestr(5);
    sbj.test();




    return 0;
}
