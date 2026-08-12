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
        deque<int> q;
        for(int i = 0 ; i < n ; i++)
        {
            int x;
            cin >> x;
            if (x == 3)
            {
                int y;
                cin >> y;
                q.push_back(y);
            }
            if (x == 1)
            {
                cout << q.size() << endl;
            }
            if (x == 2)
            {
                if (!q.empty())
                {
                    cout << "NO" << endl;
                }
                else cout << "YES" << endl;
                
            }
            if (x == 4)
            {
                if (!q.empty())
                {
                    q.pop_front();
                }
                
            }
            if (x == 5)
            {
                if (q.empty())
                {
                    cout << "-1" <<endl;
                }
                else cout << q.front() << endl;
                
            }
            if (x == 6)
            {
                if (q.empty())
                {
                    cout << "-1" <<endl;
                }
                else cout << q.back() << endl;
                
            }
            
            
            
            
            
            

        }
    }
       
    return 0;
}