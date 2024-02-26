#include<bits/stdc++.h>
using namespace std;
void rev(string& s, int i, int j){
    while(i < j){
        char temp = s[i];
        s[i] = s[j-1];
        s[j-1] = temp;
        i++;
        j--;

    }
}

int main(){
    string s ="saran is a good bowler and a great field";
    int n=s.length();
    istringstream str(s);
    string word;
    string result;
    while(str >> word){
        // rev(word, 0, word.length());
        reverse(word.begin(),word.end());
        result += word + ' ';
    }
    cout<<result;
}
