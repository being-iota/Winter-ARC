#include<bits/stdc++.h>
using namespace std;

void missing(int arr[], int n) {
    int total_sum = (n * (n + 1)) / 2; // Sum of first n natural numbers
    int sum = 0;
    for(int i=0; i<n-1; i++) { // Array has n-1 elements
        sum = sum + arr[i];
    }

    int mis = total_sum - sum;
    cout << "Missing element: " << mis << endl;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter Numbers: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    missing(arr, n);

    return 0;
}