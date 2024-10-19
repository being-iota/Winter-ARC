#include <bits/stdc++.h>
using namespace std;

void rotate_array(int arr[], int n, int k) {
    int result[n];
    for(int i = 0; i < n; i++) {
        int newIndex = (i + k) % n;
        result[newIndex] = arr[i];
    }
    for(int i = 0; i < n; i++) {
        arr[i] = result[i];
    }
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int k;
    cout << "Enter the place: ";
    cin >> k;

    int arr[n];
    cout << "Enter Numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotate_array(arr, n, k);

    cout << "Rotated array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}