#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for(int i = 0 ; i < n ;i++) cin >> a[i];
        for(int i = 0 ; i < m ;i++) cin >> b[i];
        int cntY[1005];
        memset(cntY, 0 , sizeof(cntY));
        for(int i = 0 ; i < m ; i++) cntY[b[i]]++;
        int prefixY[1005];
        prefixY[0] = cntY[0];
        for(int i = 1 ; i <= 1000 ; i++) prefixY[i] = prefixY[i-1] + cntY[i];
        long long cnt = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if (a[i] == 0)
            {
                cnt += 0;
            }
            else if (a[i] == 1)
            {
                cnt += cntY[0];
            }
            else if (a[i] == 2)
            {
                cnt += cntY[0] + cntY[1];
                cnt += (m - prefixY[4]);
            }
            else if (a[i] == 3)
            {
                cnt += cntY[0] + cntY[1] + cntY[2];
                cnt += (m - prefixY[3]);
            }
            else{
                cnt += cntY[0] + cntY[1];
                cnt += (m - prefixY[a[i]]);
            }  
        }

        
        cout << cnt << endl;
    }
       
    return 0;
}