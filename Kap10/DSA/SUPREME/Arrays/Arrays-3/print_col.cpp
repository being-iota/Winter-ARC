#include <iostream>
using namespace std;

void column_wise(int arr[][100], int n, int m) {
    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    int arr[100][100]; // Assuming maximum size of 100x100
    cout << "Enter Numbers: ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    column_wise(arr, n, m);

    return 0;
}
