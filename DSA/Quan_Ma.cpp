#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string x , y;
        cin >> x >> y;
        int start_j = x[0] - 'a' + 1;
        int start_i = x[1] - '0';
        int end_j = y[0] - 'a' + 1;
        int end_i = y[1] - '0';
        int check[11][11];
        memset(check , -1 , sizeof(check)); 
        queue<pair<int,int>> q;
        check[start_i][start_j] = 0;
        q.push({start_i,start_j});
        while (!q.empty())
        {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            if (i == end_i && j == end_j)
            {
                break;
            }
            
            if (check[i+2][j+1] == -1 && i+2 <= 8 && j+1 <= 8)
            {
                check[i+2][j+1] = check[i][j] + 1;
                q.push({i+2,j+1});
            }
            if (check[i+2][j-1] == -1 && i+2 <= 8 && j-1 >= 1)
            {
                check[i+2][j-1] = check[i][j] + 1;
                q.push({i+2,j-1});
            }
            if (check[i-2][j+1] == -1 && i-2 >= 1 && j+1 <= 8)
            {
                check[i-2][j+1] = check[i][j] + 1;
                q.push({i-2,j+1});
            }
            if (check[i-2][j-1] == -1 && i-2 >= 1 && j-1 >= 1)
            {
                check[i-2][j-1] = check[i][j] + 1;
                q.push({i-2,j-1});
            }
            if (check[i+1][j+2] == -1 && i+1 <= 8 && j+2 <= 8)
            {
                check[i+1][j+2] = check[i][j] + 1;
                q.push({i+1, j+2});
            }
            if (check[i-1][j+2] == -1 && i-1 >= 1 && j+2 <= 8)
            {
                check[i-1][j+2] = check[i][j] + 1;
                q.push({i-1, j+2});
            }
            if (check[i-1][j-2] == -1 && i-1 >= 1 && j-2 >= 1)
            {
                check[i-1][j-2] = check[i][j] + 1;
                q.push({i-1, j-2});
            }
            if (check[i+1][j-2] == -1 && i+1 <= 8 && j-2 >= 1)
            {
                check[i+1][j-2] = check[i][j] + 1;
                q.push({i+1, j-2});
            }
            
            
            
        }
        cout << check[end_i][end_j] << endl;;
    }
      
    return 0;
}