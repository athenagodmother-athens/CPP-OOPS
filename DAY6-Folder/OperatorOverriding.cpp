#include <iostream>
#include <string>
using namespace std;


// Run-time Polymorphism
// Function Overriding
// Base Class
class Bird
{
public:
    // Base Class function
    void fly()
    {
        cout << "The bird flies in the sky!\n";
    }
};


// Derived Class
// Bird -> Eagle
class Eagle : public Bird
{
    public:
    // Derived Class function
    void fly()
    {
        cout << "The Eagle flies high in the sky at an average speed of 50-80 km per hour!\n";
    }
};


// Example 2
// Base Class
class Animal
{
public:
    void makeSound()
    {
        cout << "Animal makes some sound!\n";
    }
};


// Derived Class
// Animal -> Lion
class Lion : public Animal
{
public:
    void makeSound()
    {
        cout << "Lion roars in the Jungle!\n";
    }
};


int main()
{
    // First Example
    // e is an object of Eagle class
    Eagle e;
    // b is a pointer object of Bird class
    Bird* b;
   
    // object "b" is referring the address of object "e" which is a derived class object
    b = &e;
    // pointer object "b even though pointing/referring to derived object "e" called the Base Class Function
    b->fly();
   
    // Normally object "e" calls the Derived Class Function
    e.fly();
   
    // Second Example
    Animal* a;
    Lion l;
   
    a = &l;
    a->makeSound();


    l.makeSound();
}

