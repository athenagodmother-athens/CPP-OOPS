/*
class classname{
Data Members: 
member function:
void print()};*/
#include<iostream>
#include<string.h>
using namespace  std;
class Student{
public :
string name;
string usn;
string branch;
char section;
int marks1,marks2, marks3,marks4;
int totalMarks;
float percentage;

void printStudentInfo(){
    cout << "Student details are asw follows:\n";
    cout << "Name:" << name << "\nUSN:" << usn <<"\n branch:" << branch << "\nSection:" << section << endl;
}

void printMarksInfo(){
    cout << "You've scored\n";
    cout << marks1 << " marks in Physics\n";
    cout << marks1 << " marks in Chemistry\n";
    cout << marks1 << " marks in Mathematics\n";
    //shift+alt+downarrow
 cout<< marks4 <<"Marks in computer Science\n";
}
void printResult(){
    totalMarks= marks1+marks2+marks3+marks4;
    percentage= totalMarks/4;
    cout << "Totalmarks:" << totalMarks << endl;;
    cout <<"Percentage:" << percentage <<"%";
}
};

int main(){
    Student std1;
    std1.name= "Yashaswini.V";
    std1.usn= "1CE25CS197";
    std1.branch="Computer Science and Engineering";
    std1.section='C';
    std1.marks1=98;
    std1.marks2=94;
    std1.marks3=96;
    std1.marks4=84;

    std1.printStudentInfo();
    std1.printMarksInfo();
    std1.printResult();
    
};