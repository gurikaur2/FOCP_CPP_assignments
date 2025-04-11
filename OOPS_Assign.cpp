#include<iostream>
using namespace std;
class Student{
    string name;
    int rollno;
    int cgpa;
    string courses;
    public:
    Student(){
        name="None";
        rollno=0;
        cgpa=0;
        courses="None";  
    }
    Student( const string a,int b,int c, const string d)
    {
    name=a;
    rollno=b;
    cgpa=c;
    courses=d;
    }
    Student(Student const &r)
    {
        name=r.name;
        rollno=r.rollno;
        cgpa=r.cgpa;
        courses=r.courses; 
    }
    void add(string newcourse)
    {
        courses=courses+" "+newcourse;
        cout<<courses;
    }
    void updateCGPA(int newCGPA) {
        if (newCGPA >= 0 && newCGPA <= 10) {
            cgpa = newCGPA;
        } else {
            cout << "Invalid CGPA. Must be between 0 and 10.\n";
        }
    }
    void display(){
        cout<<"The student details are:"<<"\n Name:"<<name;
        cout<<"\n roll number:"<<rollno;
        cout<<"\n cgpa:"<<cgpa;
        cout<<"\n Courses:"<<courses;
    }
    ~Student()
    {
        cout<<"Destructor called";
    }
};

int main(){
   Student C1;//default constructor
   Student C2("Guri",43,8,"Btech BSc BBA");
    Student C3(C2);
    C2.add("MBA");
    C2.updateCGPA(5);
   C1.display();
   C2.display();
   C3.display();
}