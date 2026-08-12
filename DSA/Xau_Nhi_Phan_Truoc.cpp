#include<bits/stdc++.h>

using namespace std;

string Back_Binary(string &s)
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '0')
    {
        i--;
    }
    
    if (i < 0)
    {
        s = string(s.size(), '1');
        return s;
    }
    s[i] = '0';
    for(int j = i + 1 ; j < s.size() ; j++)
    {
        s[j] = '1';
    }
    return s;
    
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << Back_Binary(s) << endl;
    }
    
}