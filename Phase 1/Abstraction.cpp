/*
Abstraction means:

Hiding complex implementation details and showing only the necessary interface to the user.

Example: When you use an ATM, you only press buttons — you don't see the backend transactions.

*/

#include <iostream>
using namespace std;

// Abstract class
class ATM {
public :
    virtual void withdraw(int Amount) = 0 ; // pure virtual function
    virtual void checkBalance() = 0 ;
};

class UserAccount : public ATM {
private :
    int balance;
    string name;

public :
    // constructor
    UserAccount(int amount, string a)
    {
        name = a;
        if(amount >= 0) {  balance = amount; }
        else{
            cout << "Invalid Balance!" << endl;
        }
    }

    // contract methods of ATM base class, we write implementation here and override the methods
    void withdraw(int amount) override {
        if( amount < balance) { balance -= amount; }
        else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void checkBalance() override { 
        cout << name <<" account balance : " << balance << " rps." << endl;
    }


};



int main()
{
    // object created in heap and pointer which is in stack points to object
    // the concept in C++ is called "upcasting", where the object of derived class is pointed using base class pointer.
    ATM* Ajay = new UserAccount(5000, "Ajay");


    // user interacts here

    Ajay->withdraw(2000);
    Ajay->checkBalance();

    return 0;
}





