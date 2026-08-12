#include <bits/stdc++.h>
using namespace std;

bool Check(string x)
{
    if (x == "+" || x == "*" || x == "/" || x == "-")
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
        int n;
        cin >> n;
        vector<string> s(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> s[i];
        }
        reverse(s.begin(),s.end());
        queue<string> q;

        for(int i = 0 ; i < n ; i++)
        {
            if (!Check(s[i]))
            {
                q.push(s[i]);
            }
            else
            {
                string op1 = q.front();
                q.pop();
                string op2 = q.front();
                q.pop();
                int tmp;
                if (s[i] == "-")
                {
                    tmp = stoi(op2) - stoi(op1);
                }
                else if (s[i] == "*")
                {
                    tmp = stoi(op2) * stoi(op1);
                }
                else if (s[i] == "+")
                {
                    tmp = stoi(op2) + stoi(op1);
                }
                else if(s[i] == "/")
                {
                    tmp = stoi(op2) / stoi(op1);
                }
                q.push(to_string(tmp));
            }
            
        }
        cout << q.front() << endl;
    }
       
    return 0;
}