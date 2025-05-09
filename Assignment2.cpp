#include <iostream>

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
   // void displayPerson();

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

class Student
{
    int enroll_date;
    string program;
    float gpa;
    public:
    Student():enroll_date(0), program(""),gpa(0) {} //default constructor
    Student(int e, string p, float g):enroll_date(e),program(p),gpa(g) {} //parametarised constructor
    Student (const Student &s): enroll_date(s.enroll_date), program (s.program), gpa(s.gpa) {} //copy constructor
   // void displayStudent();

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

class Professor
{
    string department;
    string specialisation;
    string hire_date;
    public: 
    Professor() : department(""), specialisation(""), hire_date("") {}//default constructor
    Professor(string d, string s, string h) : department(d), specialisation(s), hire_date(h) {}//parametarised constructor
    Professor(const Professor &p) : department(p.department), specialisation(p.specialisation), hire_date(p.hire_date) {}//copy constructor
    //void displayProfessor();

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

class Course
{
    int code;
    string title;
    float credits;
    string description;
    public:
    Course(): code(0), title(""), credits(0), description("") {}//default constructor
    Course(int c, string t, float cred, string d):code(c),title(t),credits(cred),description(d) {}//parameterised constructor
    Course(const Course  &c):code(c.code),title(c.title),credits(c.credits),description(c.description) {} //copy constructor
   // void displayCourse();
    ~Course() {}//destructor

    int getCode()//getter for code
    {
        return code;
    }
    void setCode(int c)//getter for code
    {
        code=c;
    }

    string getTitle()//getter for title
    {
        return title;
    }
    void setTitle(string t)//setter for title
    {
        title=t;
    }

    float getCredits()//getter for credits
    {
        return credits;
    }
    void setCredits(float cred)//setter for credits
    {
        credits=cred;
    }

    string getDescription()//getter for description
    {
        return description;
    }
    void setDescription(string d)//setter for description
    {
        description=d;
    }
    
    void displayCourse()
    {
        cout<<"Course code:"<<code<<"\n Course Title:"<<title<<"\n Course credits:"<<credits<<"\n Course description:"<<description<<endl;
    }


};

class Department
{
    string name;
    string location;
    float budget;
    public:
    Department():name(""),location(""),budget(0) {}//default constructor
    Department(string n, string l, float b): name(n),location(l),budget(b) {}//parameterised constructor
    Department(const Department &d): name(d.name), location(d.location),budget(d.budget) {} //copy constructor
   // void displayDepartment() ;
    ~Department () {}//destructor

    string getName()//getter for name
    {
        return name;
    }
    void setName(string n)//setter for name
    {
        name=n;
    }

    string getLocation()//getter for location
    {
        return location;
    }
    void setLocation(string l)//setter for location
    {
        location=l;
    }

    float getBudget()//getter for budget
    {
        return budget;
    }
    void setBudget(float b)//setter for budget
    {
        budget=b;
    }

    void displayDepartment()
    {
        cout<<"Deparment name:"<<name<<"\n Department location:"<<location<<"\n Department budget:"<<budget<<endl;
    }
};

int main ()
{
    Person p1("Guri",19, 107040, 8178969076);
    Person p2("Kanika",18,12323,9911900664);
    Student s1;
    Student s2;
    Professor prof1;
    Professor prof2;
    Course c1;
    Course c2;
    Department d1;
    Department d2;

    p1.displayPerson();
    p2.displayPerson();


    return 0;
}