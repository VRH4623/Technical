#include<bits/stdc++.h>
using namespace std;

bool isIsbn(string str){
    int sum=0;
    reverse(str.begin(),str.end());
    int n=str.size();
    if(n!=10){
        return false;
    }
    for(int i=0;i<n;i++){
        if(str[i]=='X' || str[i]=='x'){
            sum+= (i+1)*10;
        }
        else{
            sum += (i+1) *(str[i] - '0');
        }
    }
    cout<<sum<<endl;
    if(sum%11!=0){
        return false;
    }
    
    return true;
}

int main(){
    string s;
    cin>>s;
    if(isIsbn(s)){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
}
