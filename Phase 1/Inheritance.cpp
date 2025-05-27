
/* 
Inheritance means one class (child/derived class) inherits features (data/functions) from another class (parent/base class).

It promotes code reuse and helps create a hierarchy of classes.

*/

#include <iostream>

using namespace std;

// Base Class (Parent)
class Employee {
public :
    string name;
    int id;

    void displayinfo() {
        cout << "The name of the Employee is " << name << " and the id is " << id << endl;
    }
};

// Derived class (child)
class Developer : public Employee {
public :
    string programmingLanguage;

    void code() {
        cout << "I love to code in " << programmingLanguage << " language." << endl;
    }
};

int main() 
{

    Developer dev;

    dev.name = "Ajay";
    dev.id = 21;
    dev.programmingLanguage = "C++";

    dev.displayinfo(); // Inherited from Employee
    dev.code(); // Own method

    return 0;
}





