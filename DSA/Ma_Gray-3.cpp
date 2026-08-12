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
        cin >> s;\
        int n = s.size();
        bitset<10> bits(s);
        bits ^= (bits>>1);
        string res = bits.to_string();
        cout << res.substr(10-n) << endl;
    }
       
    return 0;
}