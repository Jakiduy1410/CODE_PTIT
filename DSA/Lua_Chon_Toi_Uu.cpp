#include<bits/stdc++.h>

using namespace std;

struct Job{
    int start,end;
};

bool Cmp(const Job &a , const Job &b)
{
    return a.end < b.end;
}

void Solve(Job a[], int n)
{
    int cnt = 0;
    int tmp = -1;
    for(int i = 0 ; i < n ; i++)
    {
        if (a[i].start >= tmp)
        {
            tmp = a[i].end;
            cnt++;
        }
        else
        {
            continue;
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
        Job a[100001];
        int n;
        cin >> n;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i].start >> a[i].end;
        }
        sort(a,a+n,Cmp);
        Solve(a,n);
    }
    
}