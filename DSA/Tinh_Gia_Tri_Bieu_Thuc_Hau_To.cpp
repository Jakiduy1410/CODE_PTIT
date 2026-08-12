#include <bits/stdc++.h>
using namespace std;

bool Check(char x)
{
    switch (x)
    {
    case '+':
    case '-':
    case '/':
    case '*':
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
        stack<char> st;
        for (char c : s)
        {
            if (Check(c))
            {
                char op1 = st.top();
                st.pop();
                char op2 = st.top();
                st.pop();
                int tmp;
                if (c == '+')
                {

                    tmp = (op1 - '0') + (op2 - '0');
                }
                if (c == '-')
                {

                    tmp = (op2 - '0') - (op1 - '0');
                }
                if (c == '*')
                {

                    tmp = (op2 - '0') * (op1 - '0');
                }
                if (c == '/')
                {
                    tmp = (op2 - '0') / (op1 - '0');
                }
                st.push(tmp + '0');
            }
            else
                st.push(c);
        }
        cout << st.top() - '0' << endl;
    }

    return 0;
}