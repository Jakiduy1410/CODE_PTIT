#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    int cnt = 1;
    for (int i = 0; i < n-1; i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            if (a[j] < a[i])
            {
                swap(a[i] , a[j]);
            }
            
        }
        cout << "Buoc " << cnt << ": ";
        for(auto i : a) cout << i << " ";
        cnt++;
        cout << endl;
    }
       
    return 0;
}