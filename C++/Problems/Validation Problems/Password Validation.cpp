#include<bits/stdc++.h>

using namespace std;


bool validPassword(string s){
    
    if(!(s.length()>=8 && s.length()<=15)){
        return false;
    }
    
    if(count_if(s.begin(),s.end(),::isdigit)==0){
        return false;
    }
    
    if(count_if(s.begin(),s.end(),::isupper)==0){
        return false;
    }
    
    if(count_if(s.begin(),s.end(),::islower)==0){
        return false;
    }
    
    if(s.find(" ")!=string::npos){
        return false;
    }
    
    if(none_of(s.begin(),s.end(),::ispunct)){
        return false;
    }
    
    return true;
    
}


int main(){
    string str;
    cout<<"Enter Password : ";
    cin>>str;
    
    if(validPassword(str)){
        cout<<str<<" is Valid";
    }
    else{
        cout<<"Invalid";
    }
}
