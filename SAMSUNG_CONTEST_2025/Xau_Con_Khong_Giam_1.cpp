#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n  = s.size();
    vector<int> dp(n+1,1);
    vector<char> res;
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        auto it = upper_bound(res.begin() , res.end() , c);
        if (it == res.end())
        {
            res.push_back(c);
        }
        else{
            int pos = it - res.begin();
            res[pos] = c;
        }
        
    }
    
    cout << res.size();
    return 0;
}