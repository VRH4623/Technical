#include<bits/stdc++.h>
using namespace std;

class Count{
    friend void setx(Count &c, int x1);
    int x;
    public:
        Count()
        {
            x = 0;
        }
        // setx declared outside the class
        int getx(){
            return x;
        }
};

void setx(Count &c, int x1){
    c.x = x1;
}

int main(){
   Count c1;
   setx(c1,10);
   cout<<c1.getx();
}

// Friend function is to make use the members in the private as public, so should declare as friend and pass reference to it.
