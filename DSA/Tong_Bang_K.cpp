#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // dp[x] = số cách để tổng bằng x (sử dụng các phần tử a[], thứ tự được tính)
        vector<long long> dp(k + 1, 0);
        dp[0] = 1; // có 1 cách để đạt tổng 0: không chọn gì

        // Duyệt tổng từ 1..k, với mỗi tổng thử thêm từng phần tử a[j]
        for (int i = 1; i <= k; i++)
        {
            for (auto j : a)
            {
                if (i - j >= 0)
                {
                    dp[i] = (dp[i] + dp[i - j]) % MOD; // cộng số cách tạo (i-j)
                }
            }
        }

        // Kết quả: số cách để có tổng k
        cout << dp[k] << endl;
    }

    return 0;
}