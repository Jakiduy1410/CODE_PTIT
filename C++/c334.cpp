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
        int res = 0, sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]))
            {
                sum = sum * 10 + (s[i] - '0');
            }
            else
            {
                res += sum;
                sum = 0;
            }
        }
        res += sum;
        cout << res << endl;
    }
    
}