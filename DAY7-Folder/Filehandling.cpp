#include<iostream>
#include<string>
// To work with Files
#include<fstream>
using namespace std;


// We can use 3 functions with fstream:
// 1) ofstream - Writing
// 2) ifstream - Reading                                       
// 3) fstream - Both Reading/Writing


int main(){
    ofstream file("demo.txt");


    file << "Hello World! is written in the File";


    file.close();
}


