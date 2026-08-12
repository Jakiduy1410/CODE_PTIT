#include<bits/stdc++.h>

using namespace std;

void Solve(vector<int> a)
{
    long long res_1 = a.back() * a[a.size() - 2] * a[a.size() - 3];
    long long res_2 = a[0] * a[a.size() - 2] * a[a.size() - 3];
    long long res_3 = a[0] * a[1];
    long long res_4 = res_3 * a.back();
    int ans = max(max(res_1,res_2), max(res_3,res_4));
    cout << ans << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    Solve(a);
}