#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int b;
    cin>>a>>b;
    
    try{
        if(b==0){
            throw 5;
        }
    cout<<a/b;
    }
    
    catch(const char *ch){
        cout<<"Error Occurred..."<<" "<<ch<<endl;
    }
    
    catch(int i){
        cout<<"Math Error : "<<" "<<i<<endl;
    }
    
    cout<<"End of program";
}

//exception handling -> handling improper data to 
