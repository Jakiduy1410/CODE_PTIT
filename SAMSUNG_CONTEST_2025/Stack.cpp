#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        stack<int> st;
        int n = s.size();
        vector<int> stat(n,2);
        for(int i = 0 ; i < n ; i++)
        {
            char c = s[i];
            if (s[i] == '(')
            {
                st.push(i);
            }
            else if(s[i] == ')')
            {
                if (st.empty())
                {
                    stat[i] = -1;
                }
                else{
                    int idx = st.top(); st.pop();
                    stat[idx] = 0;
                    stat[i] = 1;
                }
                
            }
            else continue;
            
        }
        while (!st.empty())
        {
            stat[st.top()] = -1;
            st.pop();
        }
        
        for(int i = 0 ; i < n ; i++)
        {
            if (stat[i] == 2)
            {
                cout << s[i];
            }
            else cout << stat[i];
        }
        cout << endl;
    }
       
    return 0;
}