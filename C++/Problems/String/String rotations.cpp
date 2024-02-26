#include<bits/stdc++.h>
using namespace std;

bool rotations(string str1,string str2){
    if(str1.size()!=str2.size()){
        return false;
    }
    string temp = str1+str1;
    return(temp.find(str2)!=string::npos);
}



int main(){
    string s1 = "ABCD";
    string s2 = "CDAB";

    if(rotations(s1,s2)){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
}

