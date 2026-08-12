#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        queue<string> q;
        q.push("1");
        while (1)    
        {
            string a = q.front() + "0";
            string b = q.front() + "1";
            
            if (stoll(a) % n == 0)
            {
                cout << a << endl;
                break;
            }
            if (stoll(b) % n == 0)
            {
                cout << b << endl;
                break;
            }
            q.pop();
            q.push(a);
            q.push(b);
            
            
        }
    }
       
    return 0;
}