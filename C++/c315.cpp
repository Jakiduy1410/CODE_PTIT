#include <bits/stdc++.h>

using namespace std;

string Check(string s)
{

    int pos = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] < s[i - 1])
        {
            pos = i;
            for (int j = i; j < s.size(); j++)
            {
                if (s[j] > s[pos] && s[j] < s[i - 1])
                {
                    pos = j;
                }
            }
            swap(s[i - 1], s[pos]);
            return s;
        }
    }
    return "-1";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << Check(s) << endl;
    }
}