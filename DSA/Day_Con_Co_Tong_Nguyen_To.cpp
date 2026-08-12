#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<int> tmp;
vector<vector<int>> res;


int snt(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for(int i = 2 ; i * i <= n ; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        
    }
    return 1;
    
}

void Try(int i , int sum)
{
    if(i == n)
    {
        if (snt(sum))
        {
            vector<int> c = tmp;
            sort(c.rbegin(),c.rend());
            res.push_back(c);
            return;
        }
        return;
    }

    tmp.push_back(a[i]);
    Try(i+1, sum+a[i]);
    tmp.pop_back();
    Try(i+1,sum);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a.resize(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        sort(a.begin(),a.end());
        res.clear();
        tmp.clear();
        Try(0,0);
        sort(res.begin() , res.end());
        for(auto i : res)
        {
            for(auto j : i)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
       
    return 0;
}