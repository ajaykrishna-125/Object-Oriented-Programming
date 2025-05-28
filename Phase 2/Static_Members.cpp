/*
Description:
1. static members belong to the class, not to individual objects.

2. All objects of that class share the same static variable.

3. Static functions can only access static members.

Why Use Static Members?
To keep a shared counter, config, or common utility.
Example: Counting how many objects have been created.

Key Rules:
Static Member	    Rules
Static Variable	    Shared by all objects; must be defined outside the class.
Static Function	    Can be called using the class name; can't access non-static members.
*/


#include <iostream>

using namespace std;

class Car {

private :
    static int count;

public :
    // constructor
    Car() {
        count++;
    }

    static void showCount() {
        cout << "The number of cars : " << count << endl;
    }
};


int Car::count = 0;

int main() {

    // create objects
    Car c1, c2, c3, c4;

    Car::showCount();

    return 0;
}


/*

Explanation:
1. count is shared across all Car objects.
2. Each time a Car is created, count is incremented.
3. Car::showCount() shows how many cars have been made.

*/