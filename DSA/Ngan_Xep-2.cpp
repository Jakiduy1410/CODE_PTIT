#include <bits/stdc++.h>
using namespace std;
bool Check(string x)
{
    if (x == "POP" || x == "PUSH" || x == "PRINT")
    {
        return true;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> s;
    string tmp;
    while (cin >> tmp)
    {
        s.push_back(tmp);
    }
    vector<string> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (Check(s[i]))
        {
            if (s[i] == "PUSH")
            {
                st.push_back(s[i + 1]);
            }
            if (s[i] == "PRINT")
            {
                if (!st.empty())
                {
                    cout << st.back() << endl;
                }
                else cout <<"NONE" << endl;
                
            }
            if (s[i] == "POP")
            {
                st.erase(st.end());
            }
        }
        else
            continue;
    }

    return 0;
}