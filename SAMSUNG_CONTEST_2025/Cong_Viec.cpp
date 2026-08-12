#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e9;
unordered_map<long long,int> mp;
long long res;
int n;

struct Job{
    long long deadline,profit;
};

bool Cmp(const Job &a , const Job &b)
{
    return a.profit > b.profit;
}
void Solve(Job A[])
{
    for (int i = 0; i < n; i++)
    {
        int x = A[i].deadline;
        int y = A[i].profit;
        for(int j = x ; j >= 1 ; j--)
        {
            if (!mp.count(j))
            {
                mp[j] = 1;
                res += y;
                break;
            }
            
        }
    }
    cout << res << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    Job A[n];
    for(int i = 0 ; i < n ; i++)
    {
        int x , y;
        cin >> x >> y;
        A[i].deadline = x;
        A[i].profit = y;
    }
    sort(A , A+n , Cmp);
    //memset(check, false , sizeof check);
    res = 0;
    Solve(A);

    return 0;
}