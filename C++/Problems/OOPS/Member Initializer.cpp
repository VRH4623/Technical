#include<bits/stdc++.h>
using namespace  std;

class Date{
    int day;
    int month;
    int year;
    public:
        Date(int d, int m, int y){
            day = d;
            month = m;
            year = y;
        }
        string getDate(){
            return to_string(day) + '/' + to_string(month) + '/' + to_string(year);
            // they are in integers to return as string we are converting it..
        }
};

class Student{
    string name;
    Date dob;
    public: 
        Student(string n, int d, int m, int y)
        :name(n),dob(d,m,y)
        {
            
        }
        
        string getdob(){
            return dob.getDate();
        }
    
};

int main(){
    Student s1("Hemanth",04,06,2003);
    cout<<s1.getdob();
}
