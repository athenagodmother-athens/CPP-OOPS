#include<iostream>
#include<string>
using namespace std;

class Computer{
  private:
    string ip_address;
    string license="ABCD-1234-EFGH-5678";
     bool isActive=false;
  public:
    string processor;
    int ram;
    int storage;
    string os;

    //Constructor->Special function used to initialize the value to data members of the class
    // Name same as class name, No rteturn type, Automatically called when new object is created
    Computer(){
        ip_address= "N/A";
        processor= "N/A";
        ram=0;
        storage=0;
        os="N/A";
        cout << endl;
    }

    void activateLicense(){
        string license_number;
        int attempts=3;
        while(attempts > 0 && !isActive){
        cout << "Enter the Windows license key to Activate";
         isActive= true;
        cin >> license_number;
        if(license== license_number){
            cout << "Windows License Activated1" << endl; 
        }else{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
            attempts--;
            if(attempts > 0){
                cout << "Invalid Credentials!" << attempts << "attempts remaining." << endl;
            }
            cout << "Invalid Credentials" << endl;
        }
    }
    }

    void setComputerDetails(string chipset, int RAM, int space, string OS){
        processor= chipset;
        ram= RAM;
        storage= space;
        os=OS;
    }

    void turnOn(){
           cout << "Windows is Turning On!";
           cout << "Welcome to" << os << endl;
    }

    void getSystemSpecs(){
        cout << "system Specifications are as follows:" << endl;
        cout << "Processor:" << processor << endl;
        cout << "Storage:" << storage << "gb SSD" << endl;
        cout  << "OS:" << os << endl;
        cout <<  "Is License Key Activated?" << (isActive?"True":"False") << endl;
    }

    void turnOff();

    //Destructor-> same name AS THAT of class
    //To clr the memory used by the object, automatically call when program terminates
    ~Computer(){
        cout << "Destructor has been Called!" << endl;
        cout << "allocated Memory has been Cleared!" << endl;
    }
};

//Scope Resolution Operator(::)
//return_type classname::functionName()
void Computer::turnOff(){
    cout << "wndows is shutting Down.....!"  << endl;
    cout << "Thank you! Have a good Day." << endl;
}

int main(){
    //comp1- 1st object of Computer Class
    Computer comp1;

    comp1.turnOn();
    comp1.getSystemSpecs();
    comp1.turnOff();
    
    //comp2- 2nd Object of Computer Class
    Computer comp2;
    comp2.setComputerDetails("i5 10th Gen", 8, 512, "Windows 10 Pro");
    comp2.turnOn();
    comp2.activateLicense();
    comp2.getSystemSpecs();
    comp2.turnOff();
    

}