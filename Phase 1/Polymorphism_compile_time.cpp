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
class Calculator {
public :
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};


int main() {

    Calculator calc;
    
    // call functions of the object
    int a1 = calc.add(1, 2);
    int b1 = calc.add(1, 2, 3);
    double c1 = calc.add(0.1, 0.2);

    cout << "The summations are a1 = " << a1 << ", b1 = " << b1 << " and c1 = " << c1 << "." << endl;
    return 0;
}








