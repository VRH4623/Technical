#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  getline(cin,s);
  unordered_map<char,int>m;
  int count=0;
  
  for(auto i:s){
    m[i]++;
  }
  
  for(auto i:m){
    if(i.second>1){
      count=0;
      break;
    }
    else{
      count++;
    }
  }
  
  if(count==0){
    cout<<"NOT ISOGRAM";
  }
  else{
    cout<<"ISOGRAM";
  }
}
