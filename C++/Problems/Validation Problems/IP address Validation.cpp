#include<bits/stdc++.h>
using namespace std;

bool isValid(string str){
  vector<string>v;
  istringstream iss(str);
  string word;
  
  while(getline(iss,word,'.')){
    v.push_back(word);
  }
  
  if(v.size()!=4){
    return false;
  }
  
  for(auto i:v){
    int value = stoi(i);
    if(value<0 || value>255){
      return false;
    }
  }
  return true;
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

