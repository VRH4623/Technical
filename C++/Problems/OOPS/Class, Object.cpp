#include<bits/stdc++.h>
using namespace std;

class Room{
    int length;
    int breadth;
    public:
        void getResult(int l,int b){
            length =l;
            breadth = b;
        }
        int calculateArea(){
            return length*breadth;
        }
}; 
int main(){
    Room r1;
    r1.getResult(50,100);
    cout<<r1.calculateArea();
}
 
