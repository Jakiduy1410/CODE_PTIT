#include<bits/stdc++.h>

using namespace std;

int n,m;
int a[11][11];
bool visited[11][11];
int cnt;

void Path(int i , int j)
{
    if (i == n - 1 && j == m - 1)
    {
        cnt++;
    }

    visited[i][j] = true;
    if (!visited[i+1][i] && i < n )
    {
        Path(i+1,j);
    }
    if (!visited[i][j+1] && j < m)
    {
        Path(i,j+1);
    }
    visited[i][j] = false;
    
    
    
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
            
        }
        cnt = 0;
        Path(0,0);
        cout << cnt << endl;
    }
    
}