#include <bits/stdc++.h>
using namespace std;
const long long MAX = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
     int n;
     cin >> n;
     vector<vector<int>> a(n,vector<int>(n));
     for(int i = 0  ; i < n ; i++)
     {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> a[i][j];
        }
     }
     //Chú ý khởi tạo size của dp là quãng đường đi + điểm kết thúc
     vector<vector<long long>> dp(1<<n,vector<long long>(n,MAX));

     for(int i = 0 ; i < n ; i++)
     {
        dp[(1<<i)][i] = 0;
     }

     //Khởi tạo các quãng đường có thể đi được
     for(int mask = 1 ; mask < (1<<n) ; mask++)
     {
        //Khởi tạo điểm kết thúc
        for(int end = 0 ; end < n ; end++)
        {
            //Nếu điểm kết thúc có ở hành trình đi thì thông qua
            if ((mask & (1<<end)))
            {
                //Khởi tạo điểm trước khi đến điểm kết thúc
                for(int prev = 0 ; prev < n ; prev++)
                {
                    //Nếu nó khác điểm kết thúc + có ở trong hành trình đi
                    if (prev != end && mask & (1<<prev))
                    {
                        //Loại bỏ điểm kiếm thúc để tính quãng đường trước đấy
                        int prev_mask = mask ^ (1<<end);
                        if (dp[prev_mask][prev] != MAX)
                        {
                            //Đường đi sẽ là giá trị nhỏ nhất trong 2 cái dưới
                            dp[mask][end] = min(dp[mask][end] , dp[prev_mask][prev] + a[prev][end]);
                        }
                        
                    }
                    
                }
            }
            
        }
     }
     //Cả quãng đường sẽ là 11111 (Tất cả các bit 1 đc bật là đã đi qua)
     int full_mask = (1<<n) - 1;
     long long res = MAX;
     for(int i = 0 ; i < n ; i++)
     {
        //Tính xem quãng đường nào chi phí nhỏ nhất
        res = min(res,dp[full_mask][i]);
     }
     cout << res << endl;

    }
       
    return 0;
}