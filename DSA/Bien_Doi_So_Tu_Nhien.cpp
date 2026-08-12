#include <bits/stdc++.h>
using namespace std;
//const int MAX = 1e10;
vector<int> Res(int a)
{
	vector<int> b;
	for(int i = 2 ; i*i <= a ; i++)
	{
		if (a % i == 0)
		{
			//b.push_back(i);
			b.push_back(a / i);
		}
		
	}
	return b;
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
        queue<pair<int,int>> q;
        q.push({n,0});
        map<int,int> mp;
        mp[n] = 0;
        while (!q.empty())
        {
            int tmp = q.front().first;
            q.pop();
            if (tmp == 1)
            {
                break;
            }
            
            if (tmp - 1 >= 1 && mp.find(tmp-1) == mp.end())
            {
                mp[tmp-1] = mp[tmp] + 1;
                q.push({tmp-1,mp[tmp-1]});
            }
            vector<int> c = Res(tmp);
            for(auto i : c)
            {
                if (i >= 1 && mp.find(i) == mp.end())
                {
                    mp[i] = mp[tmp] + 1;
                    q.push({i,mp[i]});
                }
                
            }
            
        }
        cout << mp[1] << endl;

    }
       
    return 0;
}