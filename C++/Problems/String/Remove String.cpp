#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "occurrence";
    string s2 = "car";
    
    s1.erase(remove_if(s1.begin(),s1.end(),[&s2](char ch){
        return s2.find(ch)!=string::npos;
    }),s1.end());
    
    cout<<s1;
}
    

