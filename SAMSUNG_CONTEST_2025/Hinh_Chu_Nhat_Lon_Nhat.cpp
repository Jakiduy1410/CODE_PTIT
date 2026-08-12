#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[1005][1005];
int h[1005];
long long s = -1; // Sửa thành long long cho chắc
int dai = -1, rong = -1;

void Input()
{
    if (cin >> n >> m) { // Check cin
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                cin >> a[i][j];
            }
        }
    }
}

void Solve()
{
    // RESET BIẾN TOÀN CỤC (Quan trọng!)
    memset(h, 0, sizeof(h));
    s = -1; dai = -1; rong = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j] == 0) h[j] = 0;
            else h[j] += 1;
        }

        stack<int> st;
        int L[1005], R[1005];
        
        // Tìm biên trái
        for(int j = 0 ; j < m ; j++)
        {
            while (!st.empty() && h[st.top()] >= h[j]) st.pop();
            if(st.empty()) L[j] = -1;
            else L[j] = st.top();
            st.push(j);
        }
        
        while (!st.empty()) st.pop();

        // Tìm biên phải
        for(int j = m - 1 ; j >= 0 ; j--)
        {
            while (!st.empty() && h[st.top()] >= h[j]) st.pop();
            if(st.empty()) R[j] = m;
            else R[j] = st.top();
            st.push(j);
        }
        
        // Tính diện tích
        for(int j = 0 ; j < m ; j++)
        {
            if (h[j] == 0) continue;
            
            // SỬA 1 & 2: Dùng chỉ số j và thêm -1
            int width = R[j] - L[j] - 1; 
            int height = h[j];
            long long dientich = (long long)width * height;

            if (dientich > s)
            {
                s = dientich;
                dai = min(width, height); // Cạnh nhỏ
                rong = max(width, height); // Cạnh lớn
            }
            else if(dientich == s)
            {
                int cur_min = min(width, height);
                int cur_max = max(width, height);
                
                // SỬA 3: So sánh hiệu dương (rong - dai)
                // Hiệu càng nhỏ càng tốt (gần vuông)
                if ((cur_max - cur_min) < (rong - dai))
                {
                    dai = cur_min;
                    rong = cur_max;
                }
            }
        }
    }
    // SỬA 4: Thêm xuống dòng
    cout << dai << " " << rong << "\n"; 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (cin >> t) {
        while (t--)
        {
            Input();
            Solve();
        }
    }
    return 0;
}