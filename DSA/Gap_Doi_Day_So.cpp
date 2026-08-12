#include <bits/stdc++.h>
using namespace std;

int Solve(int n,int k,int mid)
{
   if (k == mid)
   {
    return n;
   }
   if (k < mid)
   {
    return Solve(n-1,k,mid / 2);
   }
   else
   {
    return Solve(n-1,k - mid,mid / 2);
   }
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        int mid = (1 << (n-1));
        cout << Solve(n,k,mid) << endl;
    }
        
    return 0;
}