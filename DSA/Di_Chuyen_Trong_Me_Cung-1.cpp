#include<bits/stdc++.h>

using namespace std;

int n;
vector<vector<int>> a;
bool visited[11][11];
vector<string> res;
vector<char> path;
void Try(int i, int j)
{
  if (i == n - 1 && j == n - 1)
  {
    res.push_back(string(path.begin(),path.end()));
    return;
  }

  visited[i][j] = true;
  if (i < n - 1 && a[i+1][j] == 1 && !visited[i+1][j])
  {
    path.push_back('D');
    Try(i+1,j);
    path.pop_back();
  }
  if (j < n - 1 && a[i][j+1] == 1 && !visited[i][j+1])
  {
    path.push_back('R');
    Try(i,j+1);
    path.pop_back();
  }
  visited[i][j] = false;
  
  
  
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a.resize(n , vector<int> (n));
        res.clear();
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                cin >> a[i][j];
            }
        }
        if (a[0][0] == 0 || a[n-1][n-1] == 0)
        {
            cout << "-1" << endl;
            continue;
        }
        
        Try(0,0);
        if (res.empty())
        {
            cout << "-1" << endl;
            continue;
        }
        
        for(auto i : res) cout << i << " ";
        cout << endl;
    }
    
}