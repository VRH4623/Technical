#include<bits/stdc++.h>
using namespace std;

class Room{
    public:
    template <class T>
        T maximum(T a, T b){
            T max;
            if(a>b){
                max=a;
            }
            else{
                max=b;
            }
            return max;
        }
};

int main(){
    Room r1;
    cout<<r1.maximum(10,15)<<endl;
    cout<<r1.maximum(5.0,9.45);
}

