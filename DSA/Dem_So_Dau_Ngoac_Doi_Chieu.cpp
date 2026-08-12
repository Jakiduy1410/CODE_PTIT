#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int miss = 0;
        stack<char> st;
        for(char c : s){
            if (c == ')')
            {
                if (st.empty())
                {
                    miss++;
                }
                else st.pop();
            }
            if (c == '(')
            {
                st.push(c);
            }
        }
        int res = 0;
        if (miss % 2 == 1 && st.size() % 2 == 1)
        {
            res = ((miss + st.size()) / 2) + 1;
        }
        else{
            res = ((miss + st.size()) / 2);
        }
        cout << res << endl;
    }
       
    return 0;
}