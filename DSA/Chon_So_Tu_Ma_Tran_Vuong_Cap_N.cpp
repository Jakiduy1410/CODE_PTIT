#include <bits/stdc++.h>
using namespace std;
int n,k;
int row[11];
bool visited[11];
int a[11][11];
vector<vector<int>> res;

void Try(int i, int sum)
{
    for(int j = 0 ; j < n ; j++)
    {
        if (!visited[j])
        {
            visited[j] = true;
            row[i] = j;
            if (i == n-1)
            {
                if (sum + a[i][j] == k)
                {
                    vector<int> tmp;
                    for(int pos = 0 ; pos < n ; pos++)
                    {
                        tmp.push_back(row[pos] + 1);
                    }
                    res.push_back(tmp);
                }
                
            }
            else Try(i+1, sum + a[i][j]);
            visited[j] = false;
        }
        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    memset(visited, false, sizeof visited);
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> a[i][j];
        }
    }
    Try(0,0);
    cout << res.size() << endl;
    for(auto i : res)
    {
        for(int j = 0 ; j < i.size() ; j++)
        {
            cout << i[j] << " ";
        }
        cout << endl;
    }

    return 0;
}