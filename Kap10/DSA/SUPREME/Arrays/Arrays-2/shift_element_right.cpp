#include <iostream>
using namespace std;

void shift(int arr[], int n) {
    int temp = arr[n-1];

    for(int i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }

    arr[0] = temp;

    for(int i = 0; i < n; i++) {
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