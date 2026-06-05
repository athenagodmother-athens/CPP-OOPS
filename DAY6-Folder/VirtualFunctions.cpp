// Virtual Function is used to call the Derived Class function by overriding the Base Class function


#include <iostream>
#include <string>
using namespace std;


// Base Class
class Employee
{
public:
    // virtual keyword helps us to Call the Derived Class Function
    virtual void login()
    {
        cout << "Employee successfully logged in!\n";
    }
};


// Derived Class
// Employee -> Manager
class Manager : public Employee
{
public:
    // override keyword is used to check the function overriding criteria whether the function names are same or not, if different function is identified then compiler throws the error
    // If override keyword is used in Derived Class function it is mandatory to use virtual keywordin Base Class function
    void login() override
    {
        cout << "Manager successfully logged in and Admin access was granted!\n";
    }
};


// Example 2
class Account
{
private:
    double amount;


public:
    virtual void deposit(double money)
    {
        amount = money;
        cout << "Rs." << amount << "/- deposited successfully!";
    }
};


// Account -> SavingsAccount
class SavingsAccount : public Account
{
private:
    string name;
    double amount;
public:
    void deposit(double money) override
    {
        amount = money;
        cout << "Enter the A/C holder name: ";
        cin >> name;
        cout << "Rs." << amount << "/- deposited successfully to Savings A/C of " << name << "!\n";
    }
};


int main()
{
    Employee *e;
    Manager m;


    e = &m;
    e->login();


    m.login();

//Example 2
Account* a;
SavingsAccount s;

a=&s;
a -> deposit(25000);

s.deposit(35000);
}

