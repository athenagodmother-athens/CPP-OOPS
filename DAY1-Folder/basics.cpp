#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string name;
    int age;
    string branch;
    int sem;            
    char section;
    
    cout << "Enter your name";
    cin >> name;
    cout << "Enter your age:";
    cin >> age;
    cout << "enter academic details:\n";
    cout << "Enter your branch, sem and sectoin:\n";
    cin >> branch >> sem >> section;
    cout << "Your details are as follows:\n";
    cout << "Name:" << name << "\nAge:" << age<< "\nBranch:" << branch << "\nSem:" << sem << "\nSection:" << section;

}