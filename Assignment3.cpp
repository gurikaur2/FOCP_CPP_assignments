#include <bits/stdc++.h>

using namespace std;

class Person
{
    string name;
    int age;
    int ID;
    long int contact;
    public: 
    Person() : name(""), age(0), ID(0), contact(0) {}//default constructor
    Person(string n, int a, int i, long c) : name(n), age(a), ID(i), contact(c) {}//parametarised constructor
    Person(const Person &p) : name(p.name), age(p.age), ID(p.ID), contact(p.contact) {}//copy constructor

    ~Person(){}//destructor

    string getname() //getter for name
    {
        return name;
    }
    void setname(string n)//setter for name
    {
        name=n;
    }

    int getage()//getter for age
    {
        return age;
    }
    void setage(int a)//setter for age
    {
        age=a;
    }

    int getID()//getter for ID
    {
        return ID;
    }
    void setID(int i)//setter for ID
    {
        ID=i;
    }

   long getContact()//getter for contact info
    {
        return contact;
    }
    void setContact(long c)//setter for contact info
    {
        contact=c;
    }
    
    void displayPerson()
    {
        cout<<"Name: "<<name<<"\n Age: "<<age<<"\n ID: "<<ID<<"\n Contact info: "<<contact<<endl;
    }
};

class Student:public Person
{
    int enroll_date;
    string program;
    float gpa;
    public:
    Student():enroll_date(0), program(""),gpa(0) {} //default constructor
    Student(int e, string p, float g):enroll_date(e),program(p),gpa(g) {} //parametarised constructor
    Student (const Student &s): enroll_date(s.enroll_date), program (s.program), gpa(s.gpa) {} //copy constructor
   

    ~Student() {} //destructor

    int getDate()//getter for enrollment date
    {
        return enroll_date;
    }
    void setDate(int e)//setter for enrollment date
    {
        enroll_date=e;
    }

    string getProgram() //getter for program
    {
        return program;
    }
    void setProgram(string p)//setter for program
    {
        program=p;
    }

   float getGPA()//getter for gpa
    {
        return gpa;
    }
    void setGPA(float g)//setter for gpa
    {
        gpa=g;
    }

    void displayStudent()
    {
        cout<<"Enrollment date:"<<enroll_date<<"\n Program:"<<program<<"\n GPA:"<<gpa<<endl;
    }
};

class Professor:public Person
{
    string department;
    string specialisation;
    string hire_date;
    public: 
    Professor() : department(""), specialisation(""), hire_date("") {}//default constructor
    Professor(string d, string s, string h) : department(d), specialisation(s), hire_date(h) {}//parametarised constructor
    Professor(const Professor &p) : department(p.department), specialisation(p.specialisation), hire_date(p.hire_date) {}//copy constructor
    

    ~Professor(){}//destructor

    string getdepartment() //getter for department
    {
        return department;
    }
    void setname(string d)//setter for department
    {
        department=d;
    }

    string getspecialisation()//getter for specialisation
    {
        return specialisation;
    }
    void setspecialisation(int s)//setter for specialisation
    {
        specialisation=s;
    }

    string getHireDate()//getter for hire date
    {
        return hire_date;
    }
    void setHireDate(string h)//setter for hire date
    {
        hire_date=h;
    }
    
    void displayProfessor()
    {
        cout<<"Department: "<<department<<"\n Specialisation: "<<specialisation<<"\n Hire date: "<<hire_date<<endl;
    }
};


int main ()
{
    
    return 0;
}