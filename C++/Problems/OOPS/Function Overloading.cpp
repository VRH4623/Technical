#include<bits/stdc++.h>
using namespace std;

class Room{
    public:
        int maximum(int a, int b){
            int max;
            if(a>b){
                max=a;
            }
            else{
                max=b;
            }
            return max;
        }
        
        double maximum(double a, double b){
            double max;
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

