#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[][3], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3];
    int row;
    int col;

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    printArray(arr, row, col);

    return 0;
}