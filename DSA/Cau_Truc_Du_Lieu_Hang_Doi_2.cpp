#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    queue<int> q;
    for(int i = 0 ; i < n ; i++)
    {
        string s;
        cin >> s;
        if (s == "PUSH")
        {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (s == "POP")
        {
            if (!q.empty())
            {
                q.pop();
            }
        }
        else if (s == "PRINTFRONT")
        {
            if (q.empty())
            {
                cout << "NONE" << endl;
            }
            else cout << q.front() << endl;
            
        }
        

        
        
    }   
    return 0;
}