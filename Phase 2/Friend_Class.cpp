/*
Description:
- Friend function: A non-member function that can access private and protected members of a class.

Why Use Friends?
- Sometimes you need a function or another class to access private data — without making it a member.
- Useful in operator overloading, utility functions, or tight coupling between classes.

*/


#include <iostream>
using namespace std;

class Engine {
private : 
    int horsepower;

public :
    Engine(int h) : horsepower(h) {}

    friend class Car; // friend class declaration
};

class Car {
public :
    void display(Engine e) {
        cout << "The horsepower of the engine is : " << e.horsepower << endl;
    }
};

int main(){

    Engine e1(2000);

    Car c1;

    c1.display(e1);

    return 0;
}
