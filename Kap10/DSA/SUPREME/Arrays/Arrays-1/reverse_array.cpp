#include<bits/stdc++.h>
using namespace std;

void rev_arr(int arr[], int n) {
    //Approach - (using two pointers)
    // int start = 0;
    // int end = n-1;

    // while(start<=end) {
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }

    // cout << "Array Reversed Successfully: " << endl;
    // for(int i=0; i<n; i++) {
    //     cout << arr[i] << " ";
    // }

    //approach-2 (using reverse function)

    reverse(arr, arr+n);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    rev_arr(arr, n);

    return 0;
}