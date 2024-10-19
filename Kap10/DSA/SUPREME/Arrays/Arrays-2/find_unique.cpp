#include<bits/stdc++.h>
using namespace std;


void unique(int arr[], int n) {
    // unordered_map<int, int> mp;

    // for(int i = 0; i < n; i++) {
    //     int num = arr[i];
    //     mp[num]++;
    // }

    // for(auto it : mp) {
    //     if(it.second==1) {
    //         cout << "Unique Element is: " << it.first;
    //     }
    // }

    //Approach-2 (using XOR)
    int result = 0;

    for(int i=0; i<n; i++){
        result = result ^ arr[i];
    }
    cout << result;
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

    unique(arr, n);

    return 0;
}