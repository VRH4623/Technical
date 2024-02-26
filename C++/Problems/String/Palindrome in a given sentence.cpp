#include<bits/stdc++.h>
using namespace std;

bool isPali(string s){
    string s1 = s;
    reverse(s1.begin(), s1.end());
    return s1 == s;
}

int main(){
    string str = "this is racecar madam malayalam";
    istringstream iss(str);
    unordered_set<string> set;
    string word;
    int max1 = 0;
    string final;
    string result;

    while(iss >> word){
        if(isPali(word)){
            if(word.size() > max1){
                max1 = word.size();
                result = word;
            }
            if (!final.empty()) {
                final += ' ';  // Add space only if final is not empty
            }
            final += word;
        }
    }
    
    cout << final << endl;
    cout << result << endl;
    cout << max1;
    return 0;
}

