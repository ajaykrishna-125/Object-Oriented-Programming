/*
    A class is a user-defined blueprint for creating objects. An object is a specific instance of that class, holding actual data.
*/


#include <iostream>
using namespace std;

class Student {
public:
    // Data Members
    string name;
    int age;

    // member functions
    void introduce()
    {
        cout << "Hi, My name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main()
{
    // object 
    Student s1;

    // assign data members of object
    s1.name = "Ajay";
    s1.age = 23;

    // call member function of object
    s1.introduce();

}



/*

Learned :

1. class Student creates a template.

2. s1 is an object (instance) of the class.

3. introduce() is a member function (method).

4. s1.name and s1.age are data members (variables tied to that object).
*/