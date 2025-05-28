/*

Description:
Constructor initializes objects automatically when they are created.
Destructor cleans up when an object is destroyed (e.g., releasing memory).

Syntax:
Constructor: ClassName() { ... }
Destructor: ~ClassName() { ... }

*/

#include <iostream>

using namespace std;


class Car {
public:
    // constructor
    Car() {
        cout << "Constructor invoked when object is created!" << endl;
    }

    // Destructor
    ~ Car() {
        cout << "Destructor invoked to clean up object, when it is destroyed!" << endl;
    }

    void drive()
    {
        cout << "Car is driving!" << endl;
    }
};



int main() {

    // create object
    Car myCar;

    myCar.drive();

    return 0;
}



