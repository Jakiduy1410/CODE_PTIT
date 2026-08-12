#include <bits/stdc++.h>
using namespace std;

int dx[] = {1 , -1 , 0 , 0};
int dy[] = {0 , 0 , 1 , -1};
bool visited[1001][1001];
int dp[1001][1001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , m;
    int a,b,c,d;
    cin >> n >> m;
    cin >> a >> b >> c >> d;
    a--;b--;c--;d--;
    vector<vector<char>> s(n , vector<char> (m));
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            cin >> s[i][j];
        }
    }   
    queue<pair<int,int>> q;
    memset(visited , false, sizeof visited);
    memset(dp , 0, sizeof dp);
    q.push({a,b});
    dp[a][b] = 1;
    visited[a][b] = true;
    while (!q.empty())
    {
        int cur_x = q.front().first;
        int cur_y = q.front().second;

        if (cur_x == c && cur_y == d)
        {
            cout << dp[c][d] - 1 << endl;
            break;
        }
        
        for (int i = 0; i < 4; i++)
        {
            int tmp_1 = cur_x + dx[i];
            int tmp_2 = cur_y + dy[i];
            if (tmp_1 < 0 || tmp_1 >= n) continue;
            if(tmp_2 < 0 || tmp_2 >= m) continue;
            
            if (!visited[tmp_1][tmp_2] && s[tmp_1][tmp_2] == '.')
            {
                visited[tmp_1][tmp_2] = true;
                dp[tmp_1][tmp_2] = dp[cur_x][cur_y] + 1;
                q.push({tmp_1,tmp_2});
            }
            
        }
        q.pop();
    }
    
    if (dp[c][d] == 0)
    {
        cout << -1 << endl;
    }
    

    return 0;
}