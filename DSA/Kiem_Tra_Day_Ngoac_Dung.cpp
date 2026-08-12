#include <bits/stdc++.h>
using namespace std;

bool Check(string &s){
    stack<char> st;
    for(char c : s){
        if (c == '(' || c == '[' || c == '{')
        {
            st.push(c);
        }
        else
        {
            if (c == ')')
            {
                if (st.empty())
                {
                    return false;
                }
                else{
                    if (st.top() != '(')
                    {
                        return false;
                    }
                    st.pop();
                    
                }
            }
            if (c == ']')
            {
                if (st.empty())
                {
                    return false;
                }
                else{
                    if (st.top() != '[')
                    {
                        return false;
                    }
                    st.pop();
                    
                }
            }
            if (c == '}')
            {
                if (st.empty())
                {
                    return false;
                }
                else{
                    if (st.top() != '{')
                    {
                        return false;
                    }
                    st.pop();
                    
                }
            }
            
        }
        
        
    }
    if (st.empty())
    {
        return true;
    }
    else return false;
    
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
        if (Check(s))
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
        
    }
       
    return 0;
}