#include<bits/stdc++.h>
using namespace std;

vector<int> rowWithMaxOne(vector<vector<int>>& arr) {
    int rowSize = arr.size();
    int colSize = arr[0].size();

    int oneCount = INT_MIN;
    int rowNo = -1;

    for(int i = 0; i < rowSize; i++) {
        int sum = 0;
        for(int j = 0; j < colSize; j++) {
            if(arr[i][j] == 1) {
                sum++;
            }
        }
        if(sum > oneCount) {
            oneCount = sum;
            rowNo = i;
        }
    }

    vector<int> ans;
    ans.push_back(rowNo);
    ans.push_back(oneCount);
    return ans;
}

int main() {
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    cout << "Enter the matrix elements (0 or 1): " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int> result = rowWithMaxOne(arr);
    cout << "Row with maximum 1s: " << result[0] << " with " << result[1] << " 1s." << endl;

    return 0;
}