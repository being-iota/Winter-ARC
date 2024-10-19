#include <bits/stdc++.h>
using namespace std;

void rotateby90(vector<vector<int>>& arr, int n) {
    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(arr[i].begin(), arr[i].end());
    }
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<vector<int>> matrix( n, vector<int>(n));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    rotateby90(matrix, n);

    cout << "Rotated matrix by 90 degrees:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
