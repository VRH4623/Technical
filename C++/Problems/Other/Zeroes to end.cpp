#include <iostream>
#include <vector>

using namespace std;

void push(int arr[],int n) {

    // Traverse the array and move non-zero elements to the front
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    push(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}

