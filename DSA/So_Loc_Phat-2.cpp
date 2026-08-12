#include <bits/stdc++.h>
using namespace std;
bool Cmp(const string &a , const string &b)
{
    if (a.size() != b.size())
    {
        return a.size() < b.size();
    }
    else
    {
        return a <= b; 
    }
    
    
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
        queue<string> q;
        q.push("6");
        q.push("8");
        vector<string> s;
        while (1)
        {
            string tmp = q.front();
            if (tmp.size() <= n)
            {
                s.push_back(tmp);
            }
            else break;
            q.pop();
            q.push(tmp + "6");
            q.push(tmp + "8");
            
        }
        sort(s.begin() , s.end() , Cmp);
        cout << s.size() << endl;
        for(auto i : s) cout << i << " ";
        cout << endl;
        
    }
       
    return 0;
}