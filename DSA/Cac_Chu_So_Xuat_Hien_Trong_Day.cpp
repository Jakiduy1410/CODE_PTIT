#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        set<char> st;
        for(auto i : a)
        {
            for(char c : i)
            {
                st.insert(c);
            }
        }
        for(auto i : st) cout << i << " ";
        cout << endl;
    }
   
    return 0;
}