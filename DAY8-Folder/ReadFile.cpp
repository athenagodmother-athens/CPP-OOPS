#include <iostream>
#include <string>
// Useful for File Handling
#include <fstream>
using namespace std;


int main()
{
    string  sentence;
   
    ifstream file("demo.txt");
   
    getline(file, sentence);
   
    cout << "File contains: " << sentence << endl;


    file.close();
}


