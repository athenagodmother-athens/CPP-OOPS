#include <iostream>
#include <string>
using namespace std;


// Example 1
class Department
{
public:
    string dept;
    int strength;


    // Default Constructor
    Department()
    {
        dept = "N/A";
        strength = 0;
    }


    // Parameterized Constructor
    Department(string dept, int strength)
    {
        this->dept = dept;
        this->strength = strength;
    }


    // Copy Constructor
    // Address of another object is passed as a Parameter for copy constructor
    Department(Department &d)
    {
        dept = d.dept;
        strength = d.strength;
    }


    void printInfo()
    {
        cout << "Department: " << dept << endl;
        cout << "Strength: " << strength << endl;
    }
};


// Example 2
class LibraryCard{
    public:
        string name;
        string cardID;
        string branch;
   
    // Default Constructor
    LibraryCard() {
        name = "N/A";
        cardID = "N/A";
        branch = "N/A";
    }


    // Default Constructor
    LibraryCard(string name, string cardID, string branch){
        this->name = name; 
        this->cardID = cardID;
        this->branch = branch;
    }


    // Copy Constructor
    LibraryCard(LibraryCard &card){
        name = card.name;
        cardID = card.cardID;
        branch = card.branch;
    }


    void issueCard(){
        cout << "Membership Details are as follows:\n";
        cout << "-------------------------------------\n";
        cout << "Name: " << name << endl;
        cout << "Card ID: " << cardID << endl;
        cout << "Branch: " << branch << endl;
    }
};


int main() {
    Department CSE("Computer Science & Engineering", 60);


    Department CSE_DS(CSE);


    CSE.printInfo();


    cout << endl;


    CSE_DS.printInfo();


    LibraryCard original("Akshay Rao", "LIB-001", "Bengaluru");


    original.issueCard();


    LibraryCard duplicate(original);


    duplicate.issueCard();
}



