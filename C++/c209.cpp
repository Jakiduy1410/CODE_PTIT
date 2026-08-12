#include<iostream>
//#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        int a[n + 5];
        for (int i = 1; i <= n; i++) cin >> a[i];
        int l, r;
        while (q--) {
            long long sum = 0;
            cin >> l >> r;
            for (int i = l; i <= r; i++) sum += a[i];
            cout << sum << endl;
        }
    }
}