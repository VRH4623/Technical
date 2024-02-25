#include<bits/stdc++.h>
using namespace std;

bool isPan(string str){
  set<char>set;
  transform(str.begin(),str.end(),str.begin(),::toupper);
  sort(str.begin(),str.end());
  
  for(int i=0;i<str.size()-1;i++){
    if(str[i] != str[i+1]){
      set.insert(str[i]);
    }
  }
  
  return set.size()==26;
}

int main(){
  string s;
  getline(cin,s);
  if (isPan(s)){
    cout<<"Pangram";
  }
  else{
    cout<<"Not Pangram";
  }
}
