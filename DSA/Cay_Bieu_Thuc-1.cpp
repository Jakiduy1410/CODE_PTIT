#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<string> st;
        for(int i = 0  ; i < s.size() ; i++)
        {
            if (isalpha(s[i]))
            {
                st.push(string(1,s[i]));
            }
            else{
                string op1 = st.top();
                st.pop();
                string op2 = st.top();
                st.pop();
                string tmp = op2  + s[i] +  op1;
                st.push(tmp);
            }
            
        }
        cout << st.top() << endl;
    }   
    return 0;
}