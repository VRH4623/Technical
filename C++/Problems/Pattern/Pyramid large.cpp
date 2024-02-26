#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    
    for(int line = n; line >=0; line--){
        
        for(int space = 1 ; space <= n-line; space++){
            cout<<" ";
        }
        
        for(int star = 1; star <= (line*2)-1; star++){
            cout<<"*";
        }
        
        for(int space = 1 ; space <= n-line; space++){
            cout<<" ";
        }
        
        for(int space = 1 ; space <= n-line; space++){
            cout<<" ";
        }
        
        for(int star = 1; star <= (line*2)-1; star++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    for(int line = 1; line <= n; line++){
        
        for(int space = 1 ; space <= n-line; space++){
            cout<<" ";
        }
        
        for(int star = 1; star <= (line*2)-1; star++){
            cout<<"*";
        }
        
        for(int space = 1 ; space <= n-line; space++){
            cout<<" ";
        }
        
        for(int space = 1 ; space <= n-line; space++){
            cout<<" ";
        }
        
        for(int star = 1; star <= (line*2)-1; star++){
            cout<<"*";
        }
        
        cout<<endl;
    }
}
