#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        map<char,int> mp;
        int max_len = 0;
        for(int i = 0 ; i < s.size() ; i++)
        {
            mp[s[i]]++;
            max_len = max(max_len, mp[s[i]]);
        }

        if ((s.size() - max_len) >= (max_len - 1)*(n-1))
        {
            cout << "1" << endl;
        }
        else cout << "-1" << endl;
        
    }
    
}