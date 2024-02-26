#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    reverse(s.begin(),s.end());
    istringstream iss(s);
    string word;
    vector<string>words;
    
    while(iss>>word){
        reverse(word.begin(),word.end());
        words.push_back(word);
    }
    
    for(auto i:words){
        cout<<i<<" ";
    }
    
}
