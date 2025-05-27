/*
Encapsulation is the process of hiding internal data and protecting it from unauthorized access by using:

-> Private variables (cannot be accessed directly).

-> Public functions (used to access/modify private data safely).

*/

#include <iostream>

using namespace std;

class BankAccount {
private:
    int Balance;

public :
    void setBalance(int Amount)
    {
        if(Amount >= 0) 
        {
            Balance = Amount;
        }
        else {
            cout << "Invalid Balance!" << endl;
        }
    }

    int getBalance()
    {
        return Balance;
    }
};

int main()
{
    // create object of the class
    BankAccount Ajay;

    // set the balance
    Ajay.setBalance(100000);

    // get the balance
    cout << "Ajay's bank balance is " << Ajay.getBalance() << endl;

    Ajay.setBalance(-200000);


    return 0;
}