
#include<bits/stdc++.h>
using namespace std;

void pairs(int arr[], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                cout << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
            }
        }
    }
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

    pairs(arr, n);

    return 0;
}