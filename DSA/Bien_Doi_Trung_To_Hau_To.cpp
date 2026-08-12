#include <bits/stdc++.h>
using namespace std;
int Ranking(char x)
{
    if (x == '+' || x == '-')
    {
        return 1;
    }
    if (x == '*' || x == '/')
    {
        return 2;
    }
    if (x == '^')
    {
        return 3;
    }
}
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
        stack<char> st;
        string res;
        for (char c : s)
        {
            if (isalpha(c))
            {
                res += c;
            }
            else if (c == '(')
            {
                st.push(c);
            }
            else if (c == ')')
            {
                while (!st.empty() && st.top() != '(')
                {
                    res += st.top();
                    st.pop();
                }
                st.pop();
            }
            else
            {
                if (c == '^')
                {
                    while (!st.empty() && st.top() != '(' && (Ranking(st.top()) > Ranking(c)))
                    {
                        res += st.top();
                        st.pop();
                    }
                }
                else
                {
                    while (!st.empty() && st.top() != '(' && (Ranking(st.top()) >= Ranking(c)))
                    {
                        res += st.top();
                        st.pop();
                    }
                }
                st.push(c);
            }
        }
        while (!st.empty())
        {
            if (st.top() != '(')
            {
                res += st.top();
            }

            st.pop();
        }
        cout << res << endl;
    }

    return 0;
}