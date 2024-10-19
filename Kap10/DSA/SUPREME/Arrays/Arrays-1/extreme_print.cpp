#include<bits/stdc++.h>
using namespace std;

void extreme(int arr[], int n) {
    int start = 0;
    int end = n-1;

    while(start<=end) {
        if(start==end) {
            cout << arr[start] << " ";
        }
        else {
            cout << arr[start] << endl;
            cout << arr[end] << endl;
        }
        start++;
        end--;
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    extreme(arr, n);

    return 0;
}