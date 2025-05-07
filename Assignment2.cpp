#include <iostream>

using namespace std;

class Person
{
    public:
    string name;
    int age;
    int ID;
    int contact;
    Person();//default constructor
    Person(string name,int age, int ID, int contact);//parametarised constructor
    Person (const Person &a);//copy constructor
    void displayPerson();
    ~Person()
    {
        cout<<"\n Destructor called"<<endl;
    }
    
};

class Student
{
    public:
    int enroll_date;
    string program;
    int gpa;
};

class Professor
{
    public:
    string department;
    string specialisation;
    int hire_date;
};

class Course
{
    int code;
    string title;
    int credits;
    string description;
};

class Department
{
    string name;
    string location;
    int budget;
};

int main ()
{
    
    return 0;
}