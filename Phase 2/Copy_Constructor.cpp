/*
Description:
A copy constructor is used to create a new object as a copy of an existing object. It's triggered when:

1. An object is initialized with another object (e.g., Class obj2 = obj1;)
2. Passed by value to a function
3. Returned by value from a function

Syntax :
ClassName(const ClassName &obj) {
    // Copy data from obj
}
*/


#include <iostream>
using namespace std;

class Book {
    string title;
public :
    // constructor
    Book(string t) {
        title = t;
        cout << "parametarised constructor assign's passed values!" << endl;
    }

    // copy constructor
    Book(const Book &obj) {
        title = obj.title;
        cout << "Copy constructor called for Book : " << title << endl;
    }

    void display() {
        cout << "Book title is : " << title << endl;
    }
};

int main() {

    // create object using parametarised constructor (initializes varibles of new object using parameters)
    Book book1("OOP in C++");

    // create object using copy constructor (initializes varibles of new object using variables of already created object)
    Book book2 = book1;

    book2.display();

    return 0;
}








