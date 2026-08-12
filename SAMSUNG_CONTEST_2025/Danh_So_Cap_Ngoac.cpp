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
        getline(cin , s);
        stack<pair<int,int>> st;
        int cnt = 1;
        vector<int> res(s.size() , 0);
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if (c == '(')
            {
                st.push({i , cnt});
                cnt++;
            }
            else if(c == ')')
            {
                int num = st.top().second;
                int idx = st.top().first;
                st.pop();
                res[i] = res[idx] = num;
            }
            else continue;
            
        }
        for(auto i : res)
        {
            if (i != 0)
            {
                cout << i << " ";
            }
        }    
        cout << endl;    
    }
       
    return 0;
}