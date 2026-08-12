#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char,int> mp;
        int max_len = 0;
        for(int i = 0 ; i < s.size() ; i++) 
        {
            mp[s[i]]++;
            max_len = max(max_len, mp[s[i]]);
        }
        cout << s.size() << " ";
        if (max_len > (s.size()+1) / 2)
        {
            cout << "-1" << endl;
        }
        else cout << "1" << endl;
        
    }
    
}