#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
    string studentRecords;


    ifstream file("student-details.txt");


    cout << "The students records in the file are as follows:\n";
    // If you want to fetch or read single line from the file, we use getline(file, variable)
    // If we need to read more than one line, we use while loop and pass the file content to variable
    // Syntax:
    // while(file >> variable)


    // It will fetch word by word
    // while(file >> studentRecords){
    //     cout << studentRecords << " ";
    // }


    // It will fetch line by line together
    while (getline(file, studentRecords))
    {
        cout << studentRecords << endl;
    }
    file.close();
}

