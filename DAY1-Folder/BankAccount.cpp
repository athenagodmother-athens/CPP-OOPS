// camelcase
//PascalCase
//snake_case

#include<iostream>
#include<string>
#include<random>
using namespace std;

class BankAccount{
    private:
    int ac_no;
    float balance;
    public:
    string name;
    string email_id;
    string bank;
    long phone;
    string branch;


void createAccount(string custName, string email, long mobile){  //member function
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<> uniform(11111, 999999);
   name=custName;
   email_id= email;
   phone=mobile;
   ac_no= uniform(gen);
   bank="SBI";
   branch="Kanakapura Road";
   cout << "Thank You for Creating account in " << bank <<"Bank at "<< branch<< "branch\n";
   cout << "Your Account Details are as follows:\n";
   cout  << "Name:" << name << endl;
   cout   << "Email ID:" << email_id << endl;
   cout << "Phone Number:" << phone << endl;
   cout << "account Number:" << ac_no << endl;
   cout << "Default password: pass1234" << endl;

}

int askAccountDetails(){
    int acNum;
    string pass;
    cout << "enter your A/C Number:";
    cin >> acNum;
    cout << "Enter your password:";
    cin >> pass;
    if(ac_no== acNum && pass=="pass1234"){
        cout << "Account Details Verified Succesfully!" << endl;
        return true;
    }else{
        cout << "Invalid Details! Please check account details.";
        return false;
    }
}

void deposit(){
    float money;
    if(askAccountDetails()){
    cout << "Enter the amount to be deposited:";
    cin >> money;
    balance+= money;
    cout << "Rs." << money << "/-deposited successfully to" << ac_no << endl;
    }else{
        cout << "Authentication failed! Please try again later";
}
}
void withdraw(){
    float money;
    if(askAccountDetails()){
    cout << "Enter the amount to be withdrawn:";
    cin >> money;
    balance-= money;
    cout << "Rs." << money << "/-withdrawn successfully to" << ac_no << endl;
    }else{
        cout << "Authentication failed! Please try again later";
}
}

void checkBalance(){
    if(askAccountDetails()){
        cout << "Current Balance:Rs." << balance <<"/-";
    }else{
        cout << "Authentication failed! Please try again later";
}
}
};

int main(){
    BankAccount acc1;
    acc1.createAccount("Yashaswini.V", "athena@gmail.com", 895735678);
    acc1.deposit();
    acc1.withdraw();
    acc1.checkBalance();
}
