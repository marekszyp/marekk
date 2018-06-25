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

};


int main(int argc, char *argv[])
{





    return 0;
}
