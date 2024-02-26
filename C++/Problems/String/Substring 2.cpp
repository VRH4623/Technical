#include<bits/stdc++.h>
using namespace std;


int main(){
    string s1 = "MYSLATE";
    string s2 = "ATS";
    int n1=s1.size();
    int flag =0;
    for(int i=0;i<n1;i++){
        if(s1.find(s2)!=string::npos){
            flag++;
            break;
        }
        else{
            flag=0;
        }
    }
    
    if(flag>0){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
}



