#include<bits/stdc++.h>
using namespace std;

class Room{
    int length;
    int breadth;
    public:
        // Room(int l,int b){
        //     length =l;
        //     breadth = b;

        // }
        void getVal(int l, int b){
            length = l;
            breadth = b;
        }
        int calculateArea(){
            return length*breadth;
        }
};

class Kitchen : public Room{
    
};

int main(){
    Kitchen k1;
    k1.getVal(5,10);
    cout<<k1.calculateArea();
}

