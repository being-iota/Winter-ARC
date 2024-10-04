#include<bits/stdc++.h>
using namespace std;

void rearrange(vector<int>& arr, int n) {
    int negIndex = 1;
    int posIndex = 0;
    vector<int> ans(n);

    for(int i=0; i<n; i++) {
        if(arr[i]>0) {
            ans[posIndex] = arr[i];
            posIndex = posIndex + 2;
        }

        else {
            ans[negIndex] = arr[i];
            negIndex = negIndex + 2;
        }
    }
    for(int i=0; i<n; i++) {
        cout << ans[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter Numbers: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    rearrange(arr, n);

    // for(int i=0; i<n; i++) {
    //     cout << ans[i] << " ";
    // }

    return 0;
}