#include<bits/stdc++.h>
using namespace std;

void move(int arr[], int n) {
    int j = 0; // index of the first positive number

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j) {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter Numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    move(arr, n);

    cout << "Array after moving negative numbers to the beginning: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}