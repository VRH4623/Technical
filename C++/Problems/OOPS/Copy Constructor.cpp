#include<bits/stdc++.h> 
using namespace std;

class Final{
    int real;
    int imag;
    public:
        Final(int r, int i){
            real = r;
            imag = i;
        }
        Final(const Final &F){
            real = F.real;
            imag = F.imag;
        }
        void display(){
            cout<<real<<"+"<<imag<<"i";
        }
};

int main(){
    Final f1(5,10);
    Final f2 = f1;
    f2.display();
}
// copy constructor - > getting object as input and copying it to another constructor
