#include <bits/stdc++.h>
using namespace std;

bool Check(char x)
{
    switch (x)
    {
    case '+':
    case '-':
    case '*':
    case '/':
        return true;
    default:
        return false;
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
        stack<string> st;
        reverse(s.begin() , s.end());
        for (char c : s)
        {
            if (Check(c))
            {
                string tmp;
                string op1 = st.top(); st.pop();
                string op2 = st.top(); st.pop();
                tmp = op1 + op2 + string(1,c);
                st.push(tmp);
            }
            else
            {
                st.push(string(1,c));
            }
        }
        cout << st.top() << endl;
    }

    return 0;
}