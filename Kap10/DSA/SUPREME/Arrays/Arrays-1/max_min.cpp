#include<bits/stdc++.h>
using namespace std;

//Approach-1 using INT_MAX and INT_MIN
// void maxi(int arr[], int n) {
//     int maxE = INT_MIN;
//     for(int i=0; i<n; i++) {
//         if(arr[i]>maxE) {
//             maxE=arr[i];
//         }
//     }
//     cout << "Maximum Element: " << maxE << endl;
// }

// void mini(int arr[], int n) {
//     int minE = INT_MAX;
//     for(int i=0; i<n; i++) {
//         if(arr[i]<minE) {
//             minE=arr[i];
//         }
//     }
//     cout << "Minimum Element: " << minE;
// }

//APPROACH-2 (using sorting)

// void find(int arr[], int n) {
//     sort(arr, arr+n);

//     int mini = arr[0];
//     int maxi = arr[n-1];

//     cout << "Minimum: " << mini << endl;
//     cout << "Maximum: " << maxi;
// }


//Approach - 3 (using *max _ *min)
void find(int arr[], int n) {
    int maxi = *max_element(arr, arr + n);
    int mini = *min_element(arr, arr + n);

    cout << "Maximum Element: " << maxi << endl;
    cout << "Minimum Element: " << mini << endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    find(arr, n);

    return 0;
}