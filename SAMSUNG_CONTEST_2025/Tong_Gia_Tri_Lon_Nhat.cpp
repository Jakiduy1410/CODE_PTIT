#include <bits/stdc++.h>
using namespace std;

bool Cmp(const pair<int,int> &a, const pair<int,int> b)
{
    double x1 = (double) a.second / a.first;
    double y1 = (double) b.second / b.first;
    return x1 >= y1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,weight;
    cin >> n >> weight;
    vector<pair<int,int>> a;
    for(int i = 0 ; i < n ; i++)
    {
        int x,y;
        cin >> x >> y;
        a.push_back({x,y});
    }   
    //sort(a.begin() , a.end() , Cmp);
    vector<long long> dp(weight+1,0);
    for(int i = 0 ; i < n ; i++)
    {
        for(int w = weight ; w >= a[i].first ; w--)
        {
            dp[w] = max(dp[w] , dp[w-a[i].first] + a[i].second);
        }
    }
    cout << dp[weight] << endl;
    return 0;
}