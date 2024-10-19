//bich ka dalaal dhundna hai 

#include<bits/stdc++.h>
using namespace std;

int pivot(vector<int>& arr, int n) {
    int rightSum = 0;
    int leftSum = 0;

    for(int i=0; i<n; i++) {
        rightSum = rightSum + arr[i];
    }

    for(int i=0; i<n; i++) {
        rightSum = rightSum - arr[i];
        if(rightSum==leftSum) return i;
        leftSum = leftSum + arr[i];
    }
    return -1;
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

    int pivotIndex = pivot(arr, n);
    if (pivotIndex != -1) {
        cout << "Pivot element found at index: " << pivotIndex << endl;
    } else {
        cout << "No pivot element found." << endl;
    }

    return 0;
}