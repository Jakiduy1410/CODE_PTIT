#include <bits/stdc++.h>
using namespace std;
int n;
int a[21][21];
bool visited[21];
int row[21];
int res;

void Try(int i, int sum)
{
    for(int j = 0 ; j < n ; j++)
    {
        if (!visited[j])
        {
            visited[j] = true;
            row[i] = j;
            if (i == n - 1)
            {
                if (sum + a[i][j] > res)
                {
                    res = sum + a[i][j];
                }
            }
            else Try(i+1,sum+a[i][j]);
            visited[j] = false;
            
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
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                cin >> a[i][j];
            }
        }
        res = -1;
        memset(visited, false, sizeof visited);
        Try(0,0);
        cout << res << endl;
        
    }
}