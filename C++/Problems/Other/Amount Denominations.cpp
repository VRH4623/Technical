#include<bits/stdc++.h>
using namespace std;

int main(){
    int amnt;
    cin>>amnt;
    int n=10;
    int dom[n] = {2000,500,200,100,50,20,10,5,2,1};
    
    for(int i=0;i<n;i++){
        int notes = amnt/dom[i];
        amnt %= dom[i];
        cout << dom[i] << " Rupee notes: " << notes << std::endl;
    }
}
