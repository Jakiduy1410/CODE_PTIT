#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void Sort(vector<int>& A) {
    int left = 0, right = A.size() - 1;
    while (left <= right) {
        if (left == right) {
            cout << A[right] << " ";
        } else {
            cout << A[right] << " " << A[left] << " ";
        }
        left++;
        right--;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        sort(A.begin(), A.end());
        Sort(A);
    }
    return 0;
}