// Polymorphism - Poly + morphism
// Poly - Many | Morphism - Forms
// Same Name Many Forms


// Types of Polymorphism:
// 1) Compile-time Polymorphism
//    a) Function Overloading
//    b) Operator Overloading
// 2) Run-time Polymorphism
//    a) Function Overriding
//    b) Virtual Functions
#include <iostream>
#include <string>
using namespace std;


// Function Overloading
class Printing
{
public:
    void print(int num)
    {
        cout << "Printing a number: " << num << endl;
    }


    void print(float decimal)
    {
        cout << "Printing a decimal number: " << decimal << endl;
    }


    void print(char c)
    {
        cout << "Printing a single character: " << c << endl;
    }


    void print(string name)
    {
        cout << "Printing the string(name): " << name << endl;
    }


    void print(string document, int copies)
    {
        cout << "Printing " << copies << " copies of " << document << " document.\n";
    }
};


class Salary
{
    public:
    int salary;
    void calculate(int basic){
        salary = basic;
        cout << "Basic Salary: Rs." << salary << "/-\n";
    }


    void calculate(int basic, int bonus){
        salary = basic + bonus;
        cout << "Salary with Bonus: Rs." << salary << "/-\n";
    }


    void calculate(int basic, int bonus, int allowance){
        salary = basic + bonus + allowance;
        cout << "Salary with Bonus and Allowance: Rs." << salary << "/-\n";
    }


    void calculate(int hourlyRate, float hours){
        salary = hourlyRate * hours;
        cout << "Salary for " << hours << "hrs of work: Rs." << salary << "/-\n";
    }
};


int main()
{
    Printing p;
    p.print(5);
    p.print(5.5f);
    p.print('A');
    p.print("Akshay");
    p.print("Aadhar", 5);


    Salary s;
    s.calculate(25000);
    s.calculate(25000, 5000);
    s.calculate(25000, 5000, 7500);
    s.calculate(1250, 82.5f);
}



