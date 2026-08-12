#include <bits/stdc++.h>
using namespace std;

string Check(vector<int> a , int k)
{
    auto it = find(a.begin(),a.end(),k);
    if (it != a.end())
    {
        return to_string(it - a.begin() + 1);
    }
    
    return "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        cout <<Check(a,k) << endl;
    }
       
    return 0;
}