#include<bits/stdc++.h>
using namespace std;

bool isValid(string str){
  size_t atpos = str.find('@');
  size_t dotcompos = str.find(".com");
  
  if(atpos != string::npos && dotcompos != string::npos && atpos<dotcompos){
    return true;
  }
  
  return false;
}

int main(){
  string s;
  cin>>s;
  if(isValid(s)){
    cout<<"Valid";
  }
  else{
    cout<<"Invalid";
  }
}
