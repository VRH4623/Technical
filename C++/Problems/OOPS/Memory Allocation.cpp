#include<bits/stdc++.h>
using namespace std;

int main(){
    int *p = new int(10);
    cout<<*p<<endl;
    
    int *p2 = new int[20];
    
    delete p;  
    
    delete []p2;
    
    cout<<p2; 
}
