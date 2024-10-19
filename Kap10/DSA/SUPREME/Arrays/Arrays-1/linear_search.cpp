#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter Your Target: ";
    cin >> target;

    bool flag = false;

    for(int i=0; i<n; i++) {
        if(arr[i]==target) {
            flag = true;
            break;
        }
    }

    if(flag==true) cout << "Target Found";
    else cout << "Target not found";

    return 0;
}