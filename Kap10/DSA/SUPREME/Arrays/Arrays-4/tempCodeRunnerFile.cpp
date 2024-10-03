#include <iostream>
#include <algorithm>
using namespace std;

void sortColors(int arr[], int n) {
    int start = 0;
    int index = 0;
    int end = n-1;

    while(index <= end) {
        if(arr[index]==0) {
            swap(arr[index], arr[start]);
            start++;
            index++;
        }
        else if(arr[index]==2) {
            swap(arr[index], arr[end]);
            end--;
        }

        else {
            index++;
        }
    }
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter Numbers: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    sortColors(arr, n);

    delete[] arr;
    return 0;
}