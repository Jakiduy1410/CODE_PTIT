#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();

        // dp[i] = Độ dài chuỗi ngoặc ĐÚNG dài nhất KẾT THÚC tại vị trí i
        vector<int> dp(n, 0);

        // === GIAI ĐOẠN 1: Tính toán "La Bàn Trận" (mảng dp) ===
        for (int i = 1; i < n; i++)
        {
            // Chỉ quan tâm khi gặp ngoặc đóng ')'
            if (s[i] == ')')
            {
                // TRƯỜNG HỢP 1: Xét cặp ...()
                if (s[i - 1] == '(')
                {
                    // Cơ bản là +2 cho cặp "()" vừa tạo
                    dp[i] = 2; 
                    
                    // Kiểm tra xem ngay TRƯỚC cặp "()" này có chuỗi nào đúng khác không
                    // Ví dụ: ( ( ) ) ( )  <- tại i=5, dp[i-2] = dp[3] = 4
                    if (i > 2) // Đảm bảo dp[i-2] không bị out of bound
                    {
                        if (dp[i - 2] > 0)
                        {
                            dp[i] += dp[i - 2]; // Nếu có thì cộng dồn
                        }
                    }
                }
                
                // TRƯỜNG HỢP 2: Xét cặp ...))
                // Ví dụ: ( ( ( ) ) )  <- tại i=5, dp[i-1] = 4 (là của "(())")
                // Ta cần tìm cái ngoặc '(' ở vị trí i - dp[i-1] - 1
                else if (i - dp[i - 1] > 0 && s[i - dp[i - 1] - 1] == '(') // i - dp[i-1] >= 0 là sai nhé, phải > 0
                {
                    // Lấy độ dài chuỗi con bên trong (dp[i-1]) + 2 (cho cặp ngoặc bọc ngoài)
                    dp[i] = dp[i - 1] + 2;

                    // Tương tự, kiểm tra xem có chuỗi nào ngay TRƯỚC "cả cụm" này không
                    int prev_pos = i - dp[i - 1] - 2; // Vị trí ngay trước cặp ngoặc mở
                    if (prev_pos >= 0)
                    {
                        if (dp[prev_pos] > 0)
                        {
                            dp[i] += dp[prev_pos]; // Nếu có thì cộng dồn
                        }
                    }
                }
            }
        }

        // === GIAI ĐOẠN 2: "Tham lam" duyệt ngược để tính tổng ===
        int res = 0, pos = n - 1;
        while (pos >= 0)
        {
            // Nếu phát hiện một chuỗi đúng kết thúc tại 'pos'
            if (dp[pos] > 0)
            {
                res += dp[pos]; // "Chốt" độ dài này vào kết quả
                
                // QUAN TRỌNG: Nhảy lùi (bỏ qua) cả chuỗi này để không đếm trùng phần con
                pos = pos - dp[pos];
            }
            else
            {
                // Vị trí này không phải điểm kết thúc, lùi 1 bước bình thường
                pos--;
            }
        }
        cout << res << endl;
    }
    return 0;
}