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
    case '^':
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
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        stack<char> st;
        bool ok = true;
        for(char c : s){
            if (c == ' ')
            {
                continue;
            }
            if (c == ')')
            {
                char op = st.top(); st.pop();
                bool found = false;
                while (!st.empty() && op != '(')
                {
                    if (Check(op))
                    {
                        found = true;
                    }
                    op = st.top();
                    st.pop();
                }
                if (!found)
                {
                    ok = false;
                    break;
                }
                
                
            }
            else{
                st.push(c);
            }
            
        }
        
        if (!ok)
        {
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
        
    }

    return 0;
}