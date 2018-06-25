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
    string name;
    int maxStud, curStud;
    Student *stud[100];
public:
    Subject(string name, int maxStud)
    {
        curStud=0;
        this->maxStud=maxStud;
        this->name=name;

    }
    bool addStudent(Student *stud)
    {
        if(curStud < maxStud)
        {
    this->stud[curStud] = stud;
    curStud++;
    return true;
        }
        else return false;
    }
    Student* getStudent(int i)
    {
        return stud[i];
    }

};


int main(int argc, char *argv[])
{

    Student student("log", "pass", 3);
    Subject sbj("POb", 8);
    sbj.addStudent(&student);
    student.setSemestr(5);





    return 0;
}
