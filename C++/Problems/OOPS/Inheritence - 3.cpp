#include<bits/stdc++.h>
using namespace std;

class Vote{
    string name;
    int age;
    public:
        Vote(string n, int a){
            name = n;
            age = a;
        }
        void isEligible(){
            if(age>18){
                cout<<"Eligible to vote";
            }
            else{
                cout<<"Not Eligible to vote";
            }
        }
        void print(){
            cout<<name<<endl<<age<<endl;
        }
};

class Student : public Vote{
    int age;
    public:
        Student(string n, int a) : Vote(n,a){
            print();
            isEligible();
        }  
};

int main(){
    Student s1("Hemanth",15);
}

