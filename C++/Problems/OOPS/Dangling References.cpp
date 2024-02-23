#include<bits/stdc++.h>
using namespace std;

int& dummyfun(){
    int x= 10;
    return x;
}

int main(){
    int a;
    a = dummyfun();
    cout<<a;
}


// Dangling reference -> Returning the reference of the local variabe (or) pointing variable which doesnt exist.
//To avoid this make the variable as static.

// int& dummyfun(){
//     static int x= 10;
//     return x;
// }

// int main(){
//     int a;
//     a = dummyfun();
//     cout<<a;
// }
