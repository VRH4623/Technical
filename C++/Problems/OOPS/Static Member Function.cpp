#include<bits/stdc++.h>
using namespace std;

class Room{
    static int roomsCount;
    int length;
    int breadth;
    public:
        Room(int l,int b){
            length =l;
            breadth = b;
            roomsCount++;

        }
        int calculateArea(){
            return length*breadth;
        }
        static int getroomsCount(){
            return roomsCount;
        }
};

int Room::roomsCount=0;

int main(){
    Room r1(50,100);
    Room r2(10,10);
    Room r3(5,50);
    cout<<r1.calculateArea()<<endl;
    cout<<Room::getroomsCount();
}



