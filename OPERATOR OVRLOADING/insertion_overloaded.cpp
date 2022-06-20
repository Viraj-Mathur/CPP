#include<iostream>
#include<string.h>
using namespace std;

class Employee{
public:
string Name;
int Salary;
Employee(string name, int salary){
    Name=name;
    Salary=salary;
    
}

};
void operator << (ostream& COUT, Employee& emp){ //OVERLOADING INSERTION OPERATOR(cout)
    COUT<<"Name= "<<emp.Name <<endl;
    COUT<<"Salary= "<<emp.Salary <<endl;
}
int main(){
    Employee e1=Employee("Jariv",120000);
    Employee e2=Employee("Harry",620000);
    // cout<<e1;
    // cout<<e2;
    operator<<(cout,e1);
    operator<<(cout,e2);

    return 0;
}