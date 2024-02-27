#include<bits/stdc++.h>
using namespace std;

bool canRe(string s1, string s2){
    if(s1.size()!=s2.size()){
        return false;
    }
    
    unordered_map<char,int>m;
    for(auto i:s1){
        m[i]++;
    }
    
    for(auto i:s2){
        if(m.find(i)==m.end()||m[i]==0){
            return false;
        }
        m[i]--;
    }
    return true;
}


int main(){
    string str1;
    cin>>str1;
    string str2;
    cin>>str2;
    if(canRe(str1,str2)){
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
}
