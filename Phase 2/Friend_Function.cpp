/*
Description:
- Friend function: A non-member function that can access private and protected members of a class.

Why Use Friends?
- Sometimes you need a function or another class to access private data — without making it a member.
- Useful in operator overloading, utility functions, or tight coupling between classes.

*/

#include <iostream>
using namespace std;

class Box {
private:
    int length;

public :
    Box(int l) : length(l) {}

    friend void printLength(Box b); // friend function declaration
};

// define friend function outside the class
void printLength(Box b) {
        cout << "The length of the box is : " << b.length << endl; // b.length is the private data of the object b
}

int main() {

    Box b1(10);

    printLength(b1);

    return 0;
}