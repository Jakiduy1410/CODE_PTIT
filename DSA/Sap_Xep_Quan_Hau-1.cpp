#include<bits/stdc++.h>
using namespace std;

int n;

bool col[20], d1[20],d2[20];
int res;

void Try(int row)
{
 if (row == n)
 {
    res++;
    return;
 }
 else{
    for(int i = 0 ; i < n ; i++)
    {
        if (!col[i] && !d1[row - i + n] && !d2[row + i])
        {
            col[i] = d1[row - i + n] = d2[row + i] = true;
            Try(row + 1);
            col[i] = d1[row - i + n] = d2[row + i] = false;

        }
        
    }
 }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        memset(col , false, sizeof(col));
        memset(d1 , false, sizeof(d1));
        memset(d2 , false, sizeof(d2));
        res = 0;
        Try(0);
        cout << res<< endl;
    }
    
}
