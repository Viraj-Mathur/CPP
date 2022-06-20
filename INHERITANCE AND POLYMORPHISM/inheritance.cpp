#include<iostream>
#include<string.h>

using namespace std;

class Employee{
    private:
    int eid;
    string name;

    public:
    Employee(int e,string n){
        eid=e;
        name=n;
    }

    int getEmployeeID(){
        return eid;
    }
    char getName(){
        return name;
    }

};

class FullTimeEmployee:public Employee{
    private:
    int salary;
    public:
    FullTimeEmployee(int e, string n, int sal):Employee(e,n){
        salary=sal;
    }
    int getSalary(){
        return salary;
    }
};
class ParttimeEmployee:public Employee{
    int wage;
    public:
    ParttimeEmployee(int e, string n, int w):Employee(e,n){
        wage=w;

    }
    int getWage(){
        return wage;
    }
};

int main(){
    ParttimeEmployee p1(1,"mike",4000);
    FullTimeEmployee p2(2,"harvey",5000);

    cout<<"Salary of "<<p2.getName()<<"is "<<p2.getSalary()<<endl;
    cout<<"Daily wage of "<<p1.getName()<<"is "<<p1.getWage()<<endl;
    
}