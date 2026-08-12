#include <bits/stdc++.h>
using namespace std;

struct Job
{
    int id;
    int dl;
    int profit;
};
int n;
int res,cnt;
bool visited[1001];

bool Cmp(const Job &a, const Job &b)
{
    if (a.profit != b.profit)
    {
        return a.profit > b.profit;
    }
    else return a.dl < b.dl;
    
}

void Solve(Job ds[])
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = min(n, ds[i].dl) ; j >= 1 ; j--)
        {
            if (!visited[j])
            {
                visited[j] = true;
                cnt++;
                res += ds[i].profit;
                break;
            }
            
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Job ds[1000];
        cin >> n;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> ds[i].id >> ds[i].dl >> ds[i].profit;
        }
        res = cnt = 0;
        memset(visited , false , sizeof  visited);
        sort(ds, ds+n , Cmp);
        Solve(ds);
        cout << cnt << " " << res << endl;
    }
       
    return 0;
}