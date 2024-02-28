#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 3549;
    
    int a[] ={1,4,5,9,10,40,50,90,100,400,500,900,1000 };
    string s[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};  
    int i= 12;
    
    while(n>0){
        int quo = n/a[i];
        n = n%a[i];
        
        while(quo--){
            cout<<s[i];
        }
        i--; 
    }
}
