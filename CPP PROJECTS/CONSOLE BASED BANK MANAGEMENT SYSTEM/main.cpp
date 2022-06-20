// CONSOLE BASED BANKING MANAGEMENT SYSTEM!!

#include<iostream>
#include<fstream>
#include<map>
#include<vector>
#include<cstdlib>  //FOR BASIC C FUNCTIONS (OPTONAL)
//#define MIN_BALANCE 100;  //minimum balance=Rs 100 predefined
using namespace std;

//class InsufficientFunds{};  //FOR HANDELING EXCEPTIONAL ERRORS

class Account{
    private:
    long int Account_Number;
    string First_Name;
    string Last_Name;
    float Balance;
    static long int NextAccountNumber;

    public:
    Account(){}
    Account(string f,string l,double balance);
    
    long int get_acc(){
        return Account_Number;
    }
    string get_first(){
        return First_Name; 
    }
    string get_last(){
        return Last_Name;
    }
    float getBalance(){
        return Balance;
    }

    void Deposit(double amount);
    void Withdraw(double amount);
    static void SetLastAccountNumber(long int AccountNumber);
    static long int GetLastAccountNumber();
    friend ofstream & operator << (ofstream &of, Account &acc); //OVERLOADING INSERTION OPERATOR
    friend ifstream & operator >> (ifstream &ifs, Account &acc);
    friend ostream & operator << (ostream &os, Account &acc); //OVERLOADING OSTREAM OPERATOR FOR WRITING DETAILS IN THE FILE

    
};

long int Account::NextAccountNumber=0; //DECLARING NEXT ACCOUNT NUMBER FUNCTION AS ABSTRACT
class Database{
    private:
    map<int,Account> account;
    public:
    Database();
    Account OpenAcc(string f,string l,double balance);
    Account BalanceEnquiry(int AccountNumber );
    Account Deposit(int AccountNumber,double amount);
    Account Withdraw(int AccountNumber,double amount);
    void CloseAcc(int AccountNumber);
    void ShowALLAccount();
    ~Database();
     
};

int main(){
    Database data;
    Account acc;
    int choice ;
    string fname,lname;
    int long AccountNumber;
    float balance;
    float amount;

    cout<<"!!***WELCOME TO CONSOLE BASED BANKING MANAGEMENT SYSTEM***!!"<<endl;
    cout<<"!!*** BY VIRAJ MATHUR***!!"<<endl;

    do{  //CLUBBING THE CHOICES USING DO-WHILE LOOP!!
        cout<<"SELECT ONE OF THE OPTIONS BELOW:\t"<<endl;
        cout<<"\t1 OPEN AN ACCOUNT \n";
        cout<<"\t2 BALANCE ENQUIRY \n";
        cout<<"\t3 DEPOSIT \n";
        cout<<"\t4 WITHRAW \n";
        cout<<"\t5 CLOSE ACCOUNT \n";
        cout<<"\t6 SHOW ALL COUNT \n";
        cout<<"\t7 QUIT \n";

        cout<<"ENTER YOUR CHOICE:  \n";
        cin>>choice;

        switch(choice){
            case 1:
                  cout<<"Enter First Name: ";
                  cin>>fname;
                  cout<<"Enter Last Name: ";
                  cin>>lname;
                  cout<<"Enter initil Balance: ";
                  cin>>balance;
                  acc=data.OpenAcc(fname,lname,balance);
                  cout<<endl<<"Congradulation Your Account is Created"<<endl;
                  cout<<acc;
                  break;
            
            case 2:
                  cout<<"Enter Account Number: ";
                  cin>>AccountNumber;
                  acc=data.BalanceEnquiry(AccountNumber);
                  cout<<endl<<"Your Account Details are: "<<endl;
                  cout<<acc;
                  break;
            
            case 3:
                  cout<<"Enter Account Number:  ";
                  cin>>AccountNumber;
                  cout<<"Enter Balance: ";
                  cin>>amount;
                  acc=data.Deposit(AccountNumber, amount);
                  cout<<endl<<"Amount is Deposited"<<endl;
                  cout<<acc;
                  break;
            
            case 4:
                   cout<<"Enter Account Number:";
                   cin>>AccountNumber;
                   cout<<"Enter Balance:";
                   cin>>amount;
                   acc=data.Withdraw(AccountNumber, amount);
                   cout<<endl<<"Amount Withdrawn"<<endl;
                   cout<<acc;
                   break;
            
            case 5:
                   cout<<"Enter Account Number:";
                   cin>>AccountNumber;
                   data.CloseAcc(AccountNumber);
                   cout<<endl<<"Account is Closed"<<endl;
                   cout<<acc;

            case 6:
                   data.ShowALLAccount();
                   break;

            case 7:
                   cout<<"THANK YOU AND HAVE A NICE DAY!!";
                   break;

            default:
            cout<<"\n ENTER VALID CHOICE";
            exit(0);

        }

     
    }while(choice!=7);
    
    return 0;
}

// EXECUTING MAIN FUNCTIONS

Account::Account(string fname, string lname,double balance){
    NextAccountNumber++;
    Account_Number=NextAccountNumber;
    First_Name=fname;
    Last_Name=lname;
    this->Balance=balance;
}

void Account::Deposit(double amount){
    Balance=Balance+amount;
}
// void Account::withdraw(float amount){
//     long int a;
//     a=Balance-amount;
//     if(a) > MIN_BALANCE){
//         Balance=a;
//     }
//     else{
//        throw InsufficientFunds();
//     }
// }
void Account::Withdraw(double amount)
{
if(Balance-amount<100)
cout<< "InsufficientFunds"<<endl;
else
Balance=Balance-amount;
}
void Account::SetLastAccountNumber(long int AccountNumber){
    NextAccountNumber=AccountNumber;
}

long int Account::GetLastAccountNumber(){
    return NextAccountNumber;
}

// SAVING THE DETAILS USING FILE HANDELING
ofstream & operator << (ofstream &of, Account &acc){
                                                     // WRITING IN THE FILE
    of<<acc.Account_Number<<endl;
    of<<acc.First_Name<<endl;
    of<<acc.Last_Name<<endl;
    of<<acc.Balance<<endl;
    return of;
}

ifstream & operator >> (ifstream &ifs, Account &acc){
    ifs>>acc.Account_Number;
    ifs>>acc.First_Name;
    ifs>>acc.Last_Name;
    ifs>>acc.Balance;
    return ifs;
}

ostream & operator << (ostream &os, Account &acc){
    os<<"First Name: "<<acc.get_first()<<endl;
    os<<"Last Name: "<<acc.get_last()<<endl;
    os<<"Account Number: "<<acc.get_acc()<<endl;
    os<<"Balance: "<<acc.getBalance()<<endl;
    return os;
}
// RETRIEVING DATA FROM THE FILE
Database::Database(){
    Account acc;
    ifstream file;

    file.open("Bank.txt");
    if(!file){
        cout<<"ERROR!!! Data not Found"<<endl;
        return;
    }
    
    while(!file.eof()){
        file>>acc;
        account.insert(pair<int,Account>(acc.get_acc(),acc));
    }
    Account::SetLastAccountNumber(acc.get_acc());
    file.close();
}

    Account Database::OpenAcc(string fname, string lname,double balance){
    ofstream output;
    Account acc(fname,lname,balance);
    account.insert(pair<int,Account>(acc.get_acc(),acc));

    output.open("Bank.txt", ios::trunc);
    map<int,Account>::iterator itr;
    for(itr=account.begin();itr!=account.end();itr++){
        output<<itr->second;  //Second refers to the second element of the pair - i.e. to the corresponding value in the map.
    }
    output.close();
    return acc;

    
}
    Account Database::BalanceEnquiry(int AccountNumber ){
    map<int,Account>::iterator itr=account.find(AccountNumber);
    return itr->second;
    }

    Account Database::Deposit(int AccountNumber,double amount){
        map<int,Account>::iterator itr=account.find(AccountNumber);
        itr->second.Deposit(amount);
        return itr->second;
    }

    Account Database::Withdraw(int AccountNumber,double amount){
        map<int,Account>::iterator itr=account.find(AccountNumber);
        itr->second.Withdraw(amount);
        return itr->second;
    }

    void Database::CloseAcc(int AccountNumber){
        map<int,Account>::iterator itr=account.find(AccountNumber);
        cout<<"YOUR ACCOUNT IS DELETED"<<itr->second;
        account.erase(AccountNumber);
    }

    void Database::ShowALLAccount(){
        map<int,Account>::iterator itr;
        for(itr=account.begin();itr!=account.end();itr++){
            cout<<"ACCOUNT "<<itr->first<<endl<<itr->second<<endl;

        }
    }

    Database::~Database(){ //CALLING A DESTRUCTOR
        ofstream output;
        output.open("Bank.txt", ios::trunc);

        map<int,Account>::iterator itr;
        for(itr=account.begin();itr!=account.end();itr++){
            output<<itr->second;
        }  
        output.close();
       
    }