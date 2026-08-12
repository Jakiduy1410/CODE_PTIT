#include <bits/stdc++.h>
using namespace std;

string turnLeft(string s)
{
    char tmp0 = s[0];
    char tmp1 = s[1];
    char tmp3 = s[3];
    char tmp4 = s[4];
    s[0] = tmp3; s[1] = tmp0 ; s[4] = tmp1; s[3] = tmp4;
    return s;
}
string turnRight(string s)
{
    char tmp1 = s[1];
    char tmp2 = s[2];
    char tmp4 = s[4];
    char tmp5 = s[5];
    s[1] = tmp4; s[2] = tmp1 ; s[5] = tmp2; s[4] = tmp5;
    return s;
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s,res;
        for(int i = 0 ; i < 6 ; i++)
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
         for(int i = 0 ; i < 6 ; i++)
        {
            char x;
            cin >> x;
            res.push_back(x);
        }
        
        queue<string> q;
        q.push(s);
        map<string,int> mp;
        mp[s] = 0;
        while (!q.empty())
        {
            string tmp = q.front();
            q.pop();
            if (tmp == res)
            {
                break;
            }
            string new_left = turnLeft(tmp);
            if (mp.find(new_left) == mp.end())
            {
                mp[new_left] = mp[tmp] + 1;
                q.push(new_left);
            }
            string new_right = turnRight(tmp);
            if (mp.find(new_right) == mp.end())
            {
                mp[new_right] = mp[tmp] + 1;
                q.push(new_right);
            }
        }
        cout << mp[res] << endl;
        
    }
       
    return 0;
}