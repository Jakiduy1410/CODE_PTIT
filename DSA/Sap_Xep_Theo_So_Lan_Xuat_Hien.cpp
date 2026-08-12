#include <bits/stdc++.h>
using namespace std;

bool Cmp(const pair<int,int> &a , const pair<int,int> &b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
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
        unordered_map<int,int> mp;
        for(int i = 0 ; i < n ; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            
        }
        vector<pair<int,int>> res(mp.begin(), mp.end());
        sort(res.begin() , res.end() , Cmp);
        for(auto i : res){
            for(int j = 0 ; j < i.second ; j++)
            {
                cout << i.first << " ";
            }
        }
        cout << endl;
    }
       
    return 0;
}