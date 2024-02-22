#include<bits/stdc++.h>
using namespace std;

class Room{
    int length;
    int breadth;
    public:
        Room(int l,int b){
            length =l;
            breadth = b;
        }
        
        ~Room(){
            cout<<"Destructor Called";
        }
        int calculateArea(){
            return length*breadth;
        }
};
int main(){
    Room r1(50,100);
    cout<<r1.calculateArea()<<endl;
}

