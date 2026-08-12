#include<bits/stdc++.h>
using namespace std;

int n, check[100];
vector<int> a;
int cnt;

void Check_Permutation(vector<int> sample, int i) {
    if (i > n) {
        cnt++;
        bool flag = true;
        for(int j = 1; j <= n; j++) {
            if (a[j-1] != sample[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << cnt << endl;
        }
        return;
    }
    
    for(int j = 1; j <= n; j++) {
        if (!check[j]) {
            a.push_back(j);
            check[j] = 1;
            Check_Permutation(sample, i+1);
            check[j] = 0;
            a.pop_back();
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> sample(n+1);
        for(int i = 1; i <= n; i++) {
            cin >> sample[i];
        }
        cnt = 0;
        a.clear(); 
        memset(check, 0, sizeof(check)); 
        Check_Permutation(sample, 1);
    }
    return 0;
}