#include<bits/stdc++.h>
using namespace std;

class Shape{ //abstractClass->useless class where it has no goal, but canbe used in the derived class.(only pure virrtual functio)
// no objects can be created for an abstract class.
    public: 
        double base;
        double height;
        Shape(double a, double b){
            base = a;
            height = b;
        } 
        virtual double area() = 0;//pure virtual function
}; 

class Triangle : public Shape{ 
    public:
        Triangle(double a, double b) : Shape(a,b) {}
        double area(){
            cout<<"Triangle area : ";
            return base*height/2;
        }
};

class Rectangle : public Shape{
    public:
        Rectangle(double a, double b) : Shape(a,b) {}
        double area(){
            cout<<"Rectangle area : ";
            return base*height;
        }
};

int main(){
    
    Shape *s;
    
    Triangle t(10.0,20.0);
    s = &t;
    cout<<s->area()<<endl;
    
    Rectangle r(10.0,20.0);
    s = &r;
    cout<<s->area();
}

//virtual will invoke the function which is pointed by the pointer og the object in the base class.
// virtual use pannna, pointer base class oda entha object ah point pannutho, athuketha function invoke aagum.


