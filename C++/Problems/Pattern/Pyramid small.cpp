#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    
    for(int line = n; line >= -n; line--){
        int absLine = abs(line);

        for(int i = 1; i <= n - absLine; i++)
            cout << " ";

        for(int i = 1; i <= (absLine * 2) - 1; i++)
            cout << "*";

        for(int i = 1; i <= n - absLine; i++)
            cout << " ";

        for(int i = 1; i <= n - absLine; i++)
            cout << " ";

        for(int i = 1; i <= (absLine * 2) - 1; i++)
            cout << "*";

        cout << endl;
    }

    return 0;
}

