#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<int> st_sign;
        st_sign.push(1);
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]))
            {
                cout << s[i];
            }
            else if(s[i] == '+' || s[i] == '-')
            {
                int cur_sign;
                if (s[i] == '+')
                {
                    cur_sign = 1;
                }
                else cur_sign = -1;

                cur_sign *= st_sign.top();
                if (cur_sign == 1)
                {
                    cout << "+";
                }
                else cout << '-';
            }
            else if (s[i] == '(')
            {
                int cur_sign = 1;
                if (i > 0 && s[i-1] == '-')
                {
                    cur_sign = -st_sign.top();
                }
                else cur_sign = st_sign.top();
                st_sign.push(cur_sign);
            }
            else if (s[i] == ')')
            {
                if (!st_sign.empty())
                {
                    st_sign.pop();
                }
                
            }
            
            
            
        }
        cout << endl;
    }

    return 0;
}