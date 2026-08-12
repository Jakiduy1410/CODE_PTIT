#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin, s);
    stack<char> left, right;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (c == '<')
        {
            if (!right.empty())
            {
                char tmp = right.top();
                right.pop();
                left.pop();
            }
            else
                continue;
        }
        else if (c == '>')
        {
            if (!left.empty())
            {
                char tmp = left.top();
                left.pop();
                right.push(tmp);
            }
        }
        else if (c == '-')
        {
            if (!left.empty())
            {

                left.pop();
            }
        }
        else{
            left.push(c);
        }
    }
    string res = "";
    while (!left.empty())
    {
        res += left.top();
        left.pop();
    }
    reverse(res.begin() , res.end());
    while (!right.empty())
    {
        res += right.top();
        right.pop();
    }
    cout << res << endl;;
    
    
    return 0;
}