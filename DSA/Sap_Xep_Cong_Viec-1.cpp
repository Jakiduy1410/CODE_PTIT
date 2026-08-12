#include <bits/stdc++.h>

using namespace std;
// bool check[1001];
int n;

struct Job
{
    int start, end;
};

bool Cmp(const Job &a, const Job &b)
{
    return a.end < b.end;
}

void Solve(Job a[])
{

    int cnt = 0;
    int s = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i].start > s)
        {

            cnt++;

            s = a[i].end;
        }
    }
    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Job a[1001];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].start;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].end;
        }
        sort(a, a + n, Cmp);
        Solve(a);
    }
}