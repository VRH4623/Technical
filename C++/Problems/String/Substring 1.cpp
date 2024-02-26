#include<bits/stdc++.h>
using namespace std;


int main(){
    string s1 = "MYSLATE";
    string s2 = "ATS";
    int n = s1.size();
    int flag=0;
    for(int i=0;i<=n-s2.size();i++){
        if(s1.substr(i,s2.size())==s2){
            flag=1;
            break;
        }
    }
    
    if(flag>0){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
}



