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
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        reverse(s.begin() , s.end());
        stack<char> st;
        for(char c : s){
            if (Check(c))
            {
                int tmp = 0;
                int op1 = st.top() - '0'; st.pop();
                int op2 = st.top() - '0'; st.pop();
                if (c == '+')
                {
                    tmp = op1 + op2;
                }
                if (c == '-')
                {
                    tmp = op1 - op2;
                }
                if (c == '*')
                {
                    tmp = op1 * op2;
                }
                if (c == '/')
                {
                    tmp = op1 / op2;
                }
                st.push(tmp + '0');
            }
            else st.push(c);
            
        }
        cout << st.top() - '0' << endl;
    }
       
    return 0;
}