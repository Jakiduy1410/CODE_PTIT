#include <bits/stdc++.h>
using namespace std;

int n, k;
string b[10], a[10];
long long res = LLONG_MAX;
int permu[10];
bool visited[10];

void Calc()
{
   for(int i = 0 ; i < n ; i++)
   {
    for(int j = 0 ; j < k ; j++)
    {
        b[i][j] = a[i][permu[j]];
    }
   }
   sort(b,b+n);
   long long min_num = stoll(b[0]);
   long long max_num = stoll(b[n-1]);
   res = min(res , max_num - min_num);
}

void Try(int i)
{
    for (int j = 0; j < k; j++)
    {
        if (!visited[j])
        {
            permu[i] = j;
            visited[j] = true;
            if (i == k - 1)
            {
                Calc();
            }
            else
                Try(i + 1);
            visited[j] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    memset(visited, false, sizeof visited);
    Try(0);
    cout << res << endl;
    return 0;
}