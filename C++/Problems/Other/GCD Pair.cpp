#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxGcd = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int gcd = __gcd(arr[i], arr[j]);
            maxGcd = max(maxGcd, gcd);
        }
    }
    cout<<maxGcd;
}

