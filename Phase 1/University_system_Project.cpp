/*
    Project: University Management System (Console App)
    Problem Statement : Create a console-based C++ program for a University System that manages basic information about Students and Professors.
    The system should use all 4 OOP pillars:
    1. Encapsulation : Hide internal data using access modifiers
    2. Abstraction : use abstract class for interface, and the concrete imoplementation is not shown as it is person in child class of abstract class
    3. Inheritance : base - derived classes, is-a relationship
    4. Polymorphism : "many forms", runtime polymorphism


*/

#include <iostream>
using namespace std;

//abstract base class
class Person {
public :
    string name;
    int age;
    string gender;
    int id;
    string role;

    Person() {} // default constructor
    virtual void displayDetails() = 0;
};

// derived class 1
class Student : public Person {
private : 
    int cls;
    int fees;
public :
    void setAllDetails(string name1, int age1, string gender1, int id1, string role1, int cls1, int fees1) 
    {
        name = name1;
        age = age1;
        gender = gender1;
        id = id1;
        role = role1;
        cls = cls1;
        fees = fees1;
    }

    void displayDetails() override {
        cout << "Name : " << name << endl;
        cout << "Role : " << role << endl;
        cout << "Class : " << cls << endl;
        cout << "Id : " << id << endl;
        cout << "Gender : " << gender << endl;
        cout << "Age : " << age << endl;
        cout << "Fees : " << fees << endl;
        cout << "----------------------------------" << endl;
    }



};

// derived class 2
class Professor : public Person {
private : 
    int salary;
    string subject;
public :
    void setAllDetails(string name1, int age1, string gender1, int id1, string role1, int salary1, string subject1) 
    {
        name = name1;
        age = age1;
        gender = gender1;
        id = id1;
        role = role1;
        salary = salary1;
        subject = subject1;
    }

    void displayDetails() override {
        cout << "Name : " << name << endl;
        cout << "Role : " << role << endl;
        cout << "Id : " << id << endl;
        cout << "Subject : " << subject << endl;
        cout << "Gender : " << gender << endl;
        cout << "Age : " << age << endl;
        cout << "Salary : " << salary << endl;
        cout << "----------------------------------" << endl;
    }
};




int main() {

    Person* ptr;
    
    Student s1;
    s1.setAllDetails("Ajay", 22, "Male", 1, "Student", 9, 18000);
    
    
    Professor p1;
    p1.setAllDetails("Alekhya", 24, "Female", 1, "Professor", 25000, "Maths");
    

    ptr = &s1;
    ptr->displayDetails();

    ptr = &p1;
    ptr->displayDetails();


    return 0;
}

