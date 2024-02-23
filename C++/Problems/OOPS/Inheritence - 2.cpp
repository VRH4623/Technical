#include<bits/stdc++.h>
using namespace std;

class Employee{
    int empId;
    string name;
    double salary;
    public:
        Employee(int eId, string n, double sal=0){
            empId = eId;
            name = n;
            salary = sal;
        }
        void print(){
            cout<<empId<<endl<<name<<endl<<salary<<endl;
        }
        void setName(string n){
            name =n;
        }
        string getName(){
            return name;
        }
        void setSalary(double sal){
            salary = sal;
        }
        double getSalary(){
            return salary;
        }
};

class ContractEmployee : public Employee{
    int workHours;
    public:
        ContractEmployee(int eId, string n, int wH) :Employee(eId,n){
            // calling base class constructor
            workHours = wH;
            setSalary();
        }
        void setSalary(){
            Employee::setSalary(workHours*100);
        }
        void print(){
            Employee::print();
            cout<<workHours<<endl;
        }
};

int main(){
    Employee e1(1,"RAJ",25000);
    e1.print();
    
    ContractEmployee ce2(2,"Hemanth",290);
    ce2.print();
}


