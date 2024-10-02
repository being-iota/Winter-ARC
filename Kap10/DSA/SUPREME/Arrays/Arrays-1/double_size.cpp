#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Doubling the array: " <<endl;

    for(int i=0; i<n; i++) {
        arr[i] = 2 * arr[i];
        cout << arr[i] << " ";
    }
    return 0;
}