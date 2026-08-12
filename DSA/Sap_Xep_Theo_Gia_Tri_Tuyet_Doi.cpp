#include <bits/stdc++.h>
using namespace std;

struct Vec{
    int a , pos , val;
};

bool Cmp(const Vec &x , const Vec &y)
{
    if (x.val != y.val)
    {
        return x.val < y.val;
    }
    else return x.pos < y.pos;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n , x;
        cin >> n >> x;
        Vec ds[n+5];
        for(int i = 0 ; i < n ; i++)
        {
            cin >> ds[i].a;
            ds[i].pos = i;
            ds[i].val = abs(x - ds[i].a);
        }
        sort(ds , ds + n , Cmp);
        for(int i = 0 ; i < n ; i++) cout << ds[i].a << " ";
        cout << endl;
    }
      
    return 0;
}