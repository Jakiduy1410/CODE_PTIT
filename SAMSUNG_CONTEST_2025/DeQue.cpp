#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        deque<int> dq;
        for(int i = 0 ; i < n ; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 1)
            {
                dq.push_back(x);
            }
            else dq.push_front(x);
        }
        string s;
        cin >> s;
        for(char c : s)
        {
            if (c == 'F')
            {
                dq.pop_front();
            }
            else dq.pop_back();
        }
        while (!dq.empty())
        {
            cout << dq.front() << " ";
            dq.pop_front();
        }
        
    }
       
    return 0;
}