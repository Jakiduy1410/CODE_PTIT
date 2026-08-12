#include <bits/stdc++.h>
using namespace std;
vector<int> b;

void NSE(vector<long long> &a, int n)
{
    b.clear();
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && a[st.top()] >= a[i])
        {
            st.pop();
        }

        if (st.empty())
        {
            b.push_back(n);
        }
        else
            b.push_back(st.top());

        st.push(i);
    }
    reverse(b.begin(), b.end());
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // số lượng test case
    while (t--)
    {
        int n;
        cin >> n; // số cột/hàng của histogram cho test hiện tại

        // đọc mảng chiều cao thanh histogram
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // b[i] sau khi gọi NSE là chỉ số của phần tử nhỏ hơn tiếp theo bên phải của a[i]
        NSE(a, n);

        // Dùng stack để tìm vị trí nhỏ hơn tiếp theo bên trái đồng thời tính diện tích
        stack<int> st;
        long long max_area = 0;

        for (int i = 0; i < n; i++)
        {
            // duy trì stack chứa chỉ số các cột với chiều cao tăng dần từ đáy lên
            while (!st.empty() && a[i] <= a[st.top()])
            {
                st.pop();
            }

            long long tmp = 0;
            if (st.empty())
            {
                // không có phần tử nhỏ hơn bên trái -> khoảng rộng là từ 0 đến b[i]-1
                // độ dài = (b[i] - 1) - 0 + 1 = b[i]
                tmp = (long long)(b[i]) * a[i];
            }
            else
            {
                // có phần tử nhỏ hơn bên trái tại st.top()
                // khoảng rộng là (st.top()+1) .. (b[i]-1)
                // độ dài = (b[i]-1) - (st.top()+1) +1 = b[i] - 1 - st.top()
                tmp = (long long)(b[i] - 1 - st.top()) * a[i];
            }

            // cập nhật diện tích lớn nhất
            max_area = max(max_area, tmp);

            // thêm chỉ số hiện tại để phục vụ các cột bên phải
            st.push(i);
        }

        // in diện tích lớn nhất tìm được cho test hiện tại
        cout << max_area << '\n';
    }

    return 0;
}
```// filepath: d:\PTIT\CodePtit\DSA\Hinh_Chu_Nhat_Lon_nhat.cpp
#include <bits/stdc++.h>
using namespace std;
vector<int> b;

void NSE(vector<long long> &a, int n)
{
    b.clear();
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && a[st.top()] >= a[i])
        {
            st.pop();
        }

        if (st.empty())
        {
            b.push_back(n);
        }
        else
            b.push_back(st.top());

        st.push(i);
    }
    reverse(b.begin(), b.end());
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // số lượng test case
    while (t--)
    {
        int n;
        cin >> n; // số cột/hàng của histogram cho test hiện tại
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // b[i] sau khi gọi NSE là chỉ số của phần tử nhỏ hơn tiếp theo bên phải của a[i]
        NSE(a, n);

        // Dùng stack để tìm vị trí nhỏ hơn tiếp theo bên trái đồng thời tính diện tích
        stack<int> st;
        long long max_area = 0;

        for (int i = 0; i < n; i++)
        {
            // duy trì stack chứa chỉ số các cột với chiều cao tăng dần từ đáy lên
            while (!st.empty() && a[i] <= a[st.top()])
            {
                st.pop();
            }

            long long tmp = 0;
            if (st.empty())
            {
                // không có phần tử nhỏ hơn bên trái -> khoảng rộng là từ 0 đến b[i]-1
                // độ dài = (b[i] - 1) - 0 + 1 = b[i]
                tmp = (long long)(b[i]) * a[i];
            }
            else
            {
                // có phần tử nhỏ hơn bên trái tại st.top()
                // khoảng rộng là (st.top()+1) .. (b[i]-1)
                // độ dài = (b[i]-1) - (st.top()+1) +1 = b[i] - 1 - st.top()
                tmp = (long long)(b[i] - 1 - st.top()) * a[i];
            }

            // cập nhật diện tích lớn nhất
            max_area = max(max_area, tmp);

            // thêm chỉ số hiện tại để phục vụ các cột bên phải
            st.push(i);
        }

        // in diện tích lớn nhất tìm được cho test hiện tại
        cout << max_area << '\n';
    }

    return 0;
}