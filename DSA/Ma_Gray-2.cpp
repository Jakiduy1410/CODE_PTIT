#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        bitset<10> bits(s);
        bitset<10> tmp(s);
        for(int i = 1 ; i <= n ; i++)
        {
            bitset<10> tes = (tmp >> i);
            bits ^= tes;
        }
       
        string ans = bits.to_string();
        cout << ans.substr(10-n) << endl;
    }
       
    return 0;
}