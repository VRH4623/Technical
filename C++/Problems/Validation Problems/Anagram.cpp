#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string str1, string str2){
    int n1 = str1.size();
    int n2 = str2.size();
    if(n1!=n2){
        return false; 
    }
    
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    
    for(int i=0;i<n1;i++){
        if(str1[i]!=str2[i]){
            return false;
        }
    }
    
    return true;
}

int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    if(isAnagram(s1,s2)){
        cout<<"Anagram";
    }
    else{
        cout<<"Not an anagram";
    }
}
