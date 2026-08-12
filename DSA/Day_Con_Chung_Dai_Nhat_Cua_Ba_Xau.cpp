#include <bits/stdc++.h>
using namespace std;

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string a, b, c;
        cin >> a >> b >> c;
        
        // dp[i][j][d] = độ dài LCS của a[0..i-1], b[0..j-1], c[0..d-1]
        int dp[101][101][101];
        memset(dp, 0, sizeof dp);
        
        // Duyệt qua ba xâu
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                for(int d = 1; d <= k; d++)
                {
                    // Nếu 3 ký tự hiện tại giống nhau, cộng 1 vào LCS trước đó
                    if (a[i-1] == b[j-1] && b[j-1] == c[d-1]) 
                    {
                        dp[i][j][d] = dp[i-1][j-1][d-1] + 1;
                    }
                    else
                    {
                        // Ngược lại, lấy max từ 3 trường hợp bỏ 1 ký tự
                        dp[i][j][d] = max(dp[i-1][j][d], max(dp[i][j-1][d], dp[i][j][d-1]));
                    }
                }
            }
        }
        
        // In độ dài dãy con chung dài nhất
        cout << dp[n][m][k] << endl;
    }
       
    return 0;
}