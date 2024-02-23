#include<bits/stdc++.h>
using namespace std;

class Message{
    string from;
    string to;
    string body;
    public:
        Message(string from){
            // from = from; to avoid this naming proble, (-> this) is used to point the class member from.
            this -> from = from;
        }
        string display(){
            return from;
        }
        
};

int main(){
   Message m1("Hemanth");
   cout<<m1.display();
}
