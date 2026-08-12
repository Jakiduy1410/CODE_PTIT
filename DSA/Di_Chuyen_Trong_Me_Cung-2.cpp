#include <bits/stdc++.h>
using namespace std;
bool visited[1001][1001];
int n;
vector<string> res;
string tmp;
vector<vector<int>> a;
void Try(int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        res.push_back(tmp);
        return;
    }
    visited[i][j] = true;
    if (!visited[i+1][j] && i + 1 < n && a[i+1][j] == 1)
    {
        tmp.push_back('D');
        visited[i+1][j] = true;
        Try(i+1,j);
        tmp.pop_back();
        visited[i+1][j] = false;
    }
    if (!visited[i-1][j] && i - 1 >= 0 && a[i-1][j] == 1)
    {
        tmp.push_back('U');
        visited[i-1][j] = true;
        Try(i-1,j);
        tmp.pop_back();
        visited[i-1][j] = false;
    }
    if (!visited[i][j+1] && j + 1 < n && a[i][j+1] == 1)
    {
        tmp.push_back('R');
        visited[i][j+1] = true;
        Try(i,j+1);
        tmp.pop_back();
        visited[i][j+1] = false;
    }
    if (!visited[i][j-1] && j - 1 >= 0 && a[i][j-1] == 1)
    {
        tmp.push_back('L');
        visited[i][j-1] = true;
        Try(i,j-1);
        tmp.pop_back();
        visited[i][j-1] = false;
    }
    visited[i][j] = false;
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a.resize(n,vector<int> (n));
        res.clear();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        memset(visited, false, sizeof visited);
        if (a[0][0] == 0 || a[n - 1][n - 1] == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            Try(0, 0);
            sort(res.begin(), res.end());
            for(auto i : res)
            {
                cout << i << " ";
            }
            if (res.empty())
            {
                cout << "-1";
            }
            
            cout << endl ;
        }
    }

    return 0;
}