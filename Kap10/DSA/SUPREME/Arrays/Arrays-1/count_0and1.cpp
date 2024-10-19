#include<bits/stdc++.h>
using namespace std;

void czo(int arr[], int n) {
    int zCount = 0;
    int oCount = 0;

    for(int i=0; i<n; i++) {
        if(arr[i]==0) zCount++;
        if(arr[i]==1) oCount++;
    }

    cout << "0 " << zCount << endl;
    cout << "1 " << oCount << endl;

}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    czo(arr, n);
    return 0;
}