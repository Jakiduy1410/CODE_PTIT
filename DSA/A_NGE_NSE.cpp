#include <bits/stdc++.h>
using namespace std;
vector<int> b, c;
vector<int> b_val, c_val; // Thêm 2 vector lưu kết quả theo giá trị

void NGE(vector<int> &a)
{
    b.clear();
    stack<int> st;
    int n = a.size();

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && a[st.top()] <= a[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            b.push_back(-1);
        }
        else
        {
            b.push_back(st.top());
        }
        st.push(i);
    }
    reverse(b.begin(), b.end());
}

void NSE(vector<int> &a)
{
    c.clear();
    stack<int> st;
    int n = a.size();

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && a[st.top()] >= a[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            c.push_back(-1);
        }
        else
        {
            c.push_back(st.top());
        }
        st.push(i);
    }
    reverse(c.begin(), c.end());
}

/**
 * Hàm NGE (Next Greater Element) - THEO GIÁ TRỊ
 */
void NGE_value(vector<int> &a)
{
    b_val.clear();
    stack<int> st; // Stack vẫn lưu CHỈ SỐ
    int n = a.size();

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && a[st.top()] <= a[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            b_val.push_back(-1); // Không có NGE
        }
        else
        {
            // Thay vì lưu chỉ số st.top(), ta lưu GIÁ TRỊ a[st.top()]
            b_val.push_back(a[st.top()]); 
        }
        st.push(i);
    }
    reverse(b_val.begin(), b_val.end());
}

/**
 * Hàm NSE (Next Smaller Element) - THEO GIÁ TRỊ
 */
void NSE_value(vector<int> &a)
{
    c_val.clear();
    stack<int> st; // Stack vẫn lưu CHỈ SỐ
    int n = a.size();

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && a[st.top()] >= a[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            c_val.push_back(-1); // Không có NSE
        }
        else
        {
            // Thay vì lưu chỉ số st.top(), ta lưu GIÁ TRỊ a[st.top()]
            c_val.push_back(a[st.top()]);
        }
        st.push(i);
    }
    reverse(c_val.begin(), c_val.end());
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // Tính theo vị trí
        NGE(a);
        NSE(a);

        // Tính theo giá trị
        NGE_value(a);
        NSE_value(a);

        
        cout << "NGE_pos :" << endl;
        for (auto i : b)
        {
            cout << i << " ";
        }
        cout << endl;
        
        cout << "NGE_val :" << endl;
        for (auto i : b_val)
        {
            cout << i << " ";
        }
        cout << endl;

        cout << "NSE_pos :" << endl;
        for (auto i : c)
        {
            cout << i << " ";
        }
        cout << endl;

        // In kết quả theo giá trị

        cout << "NSE_val :" << endl;
        for (auto i : c_val)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}