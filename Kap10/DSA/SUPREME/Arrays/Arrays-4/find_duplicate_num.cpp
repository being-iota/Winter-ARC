#include<bits/stdc++.h>
using namespace std;

vector<int> dup(vector<int>& arr, int n) {
    unordered_map<int, int> mpp;
    vector<int> ans;

    for(int num : arr) {
        mpp[num]++;
    }

    for(auto it: mpp) {
        if(it.second>1) {
            ans.push_back(it.first);
        }
    }
    return ans;
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

    int sol = dup(arr, n);
    cout << "Duplicate number is: " << endl;
    for(int i=0; i<ans.size(); i++) {
        cout << 
    }

    return 0;
}
vector<int> duplicates = dup(arr, n);
cout << "Duplicate numbers are  : " << endl;
for(int i = 0; i < duplicates.size(); i++) {
    cout << duplicates[i] << " ";
}
cout << endl;
}
for(int i = 0; i < sol.size(); i++) {
    cout << sol[i] << " ";
}
cout << endl;