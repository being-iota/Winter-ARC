#include<bits/stdc++.h>
using namespace std;

void cnp(int arr[], int n) {
    // int zeroCount = 0;
    // int oneCount = 0;

    // for(int i=0; i<n; i++) {
    //     if(arr[i]==0) zeroCount++;
    //     if(arr[i]==1) oneCount++;
    // }

    // for(int i=0; i<zeroCount; i++) {
    //     arr[i] = 0;
    // }

    // for(int i=zeroCount; i<zeroCount + oneCount; i++) {
    //     arr[i] = 1;
    // }

    sort(arr, arr+n);

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
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cnp(arr, n);

    return 0;
}