/*
Polymorphism means "many forms" – the same function name behaves differently depending on the context.

In C++, we have:

Type	                        Also Called	        Example
Compile-time Polymorphism	    Static	            Function Overloading, Operator Overloading
Run-time Polymorphism	        Dynamic	            Virtual Functions with Base Pointers/References

*/

#include <iostream>

using namespace std;

// compile-time ploymorphism
class Animal {
public :
    virtual void speak() {
        cout << "Animal speaks." << endl;
    }
};

class Dog : public Animal {
public :
    void speak() override {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public :
    void speak() override {
        cout << "Cat meows." << endl;
    }
};

int main() {

    Animal* a; // base class pointer

    Dog d;
    Cat c;

    a = &d;
    a->speak();     // Dog barks

    a = &c;
    a->speak();     // Cat meows

    return 0;
}








