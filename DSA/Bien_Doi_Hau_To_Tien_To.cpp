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
        for (char c : s)
        {
            if (Check(c))
            {
                string op1 = st.top(); st.pop();
                string op2 = st.top(); st.pop();
                string tmp;
                tmp += (string(1,c) + op2 + op1);
                st.push(tmp);
            }
            else st.push(string(1,c));
        }
        cout << st.top() << endl;
    }
    return 0;
}