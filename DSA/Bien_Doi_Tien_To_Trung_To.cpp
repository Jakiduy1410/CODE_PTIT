#include <bits/stdc++.h>
using namespace std;

bool Check(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
    {
        return true;
    }
    return false;
    
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
        stack<string> st;
        for(int i = s.size() ; i >= 0 ; i--)
        {
            if (!Check(s[i]))
            {
                st.push(string(1,s[i]));
            }
            else{
                string x1 = st.top(); st.pop();
                string x2 = st.top(); st.pop();
                string tmp = "(" + x1 + s[i] + x2 + ")";
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
    }
       
    return 0;
}