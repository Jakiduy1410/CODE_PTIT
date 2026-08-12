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
        stack<int> st_num;
        stack<string> st_string;
        string num,tmp;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if (isdigit(s[i]))
            {
                num += s[i];
            }
            else if (isalpha(s[i]))
            {
                tmp += s[i];
            }
            else if (s[i] == '[')
            {
                if (num.empty())
                {
                    st_num.push(1);
                }
                else st_num.push(stoi(num));
                st_string.push(tmp);
                num.clear();
                tmp.clear();
            }
            else if (s[i] == ']')
            {
                string res;
                string repeat = tmp;
                if (!st_num.empty())
                {
                    int cnt = st_num.top();
                    st_num.pop();
                    while (cnt > 0)
                    {
                        res += repeat;
                        cnt--;
                    }
                    
                }
                tmp = st_string.top() + res;
                st_string.pop();
                
            }
        }
        
        cout << tmp << endl;
        
    }
       
    return 0;
}