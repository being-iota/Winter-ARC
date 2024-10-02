#include <iostream>
using namespace std;

void shift(int arr[], int n) {
    int temp = arr[0];

    for(int i=0; i<n; i++) {
        arr[i] = arr[i+1];
    }

    arr[n-1] = temp;

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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

    shift(arr, n);

    return 0;
}