#include<iostream>
using namespace std;


int main(){
    int num = 5;


    // Pointer Declaration
    // datatype* pointer_name;
    int* ptr;


    // Pointer pointing to address of another variable
    //Referencing Pointer
    ptr = &num;


    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value at address of ptr: " << *ptr << endl;
    //De-Refencing pointer
    cout << "Value of ptr(Address of num): " << ptr << endl;
}

