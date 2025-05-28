/*
Description:
Operator overloading allows you to redefine the behavior of operators (+, -, ==, etc.) for user-defined types (classes). This makes your objects behave like built-in types.

Syntax:
return_type operator<op>(const ClassName &obj) {
    // Define what the operator does
}

*/

#include <iostream>

using namespace std;

class Point {
    int x, y;

public :
    // constructor
    Point(int a, int b) {
        x = a;
        y = b;
    }

    // Overload + operator function
    Point operator+(const Point &p) {
        return Point(x+p.x, y+p.y); // calls constructor with parameters and the object is returned with new co-ordinates
    }

    void display() {
        cout << "(" << x << "," << " " << y << ")" << endl;
    }
};



int main()
{
    // create 2 point objects
    Point p1(2,3), p2(4,6);

    Point p3 = p1 + p2; // which means p1.operator+(p2); 
    
    p3.display();

    return 0;
}


/*
But + by default doesn’t know how to add two Point objects (because it’s not a built-in type like int). 
So, you tell the compiler what + should mean for Points by overloading it.
*/