#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt = 1;
    cout << "Buoc 0: " << a[0] << endl;
    ;
    for (int i = 1; i < n; i++)
    {
        int pos = i;
        while (pos > 0 && a[pos] < a[pos - 1])
        {
            swap(a[pos - 1], a[pos]);
            pos--;
            // else continue;
        }

        // cout << pos << " ";
        cout << "Buoc " << cnt << ": ";
        for (int i = 0; i <= cnt; i++)
            cout << a[i] << " ";
        cnt++;
        cout << endl;
    }
    return 0;
}