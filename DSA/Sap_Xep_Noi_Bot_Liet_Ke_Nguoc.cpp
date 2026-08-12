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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        stack<string> st;
        int cnt = 1;
        for (int i = 0; i < n - 1; i++)
        {
            bool check = false;
            for (int j =0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                    check = true;
                }
            }
            if (!check)
            {
                break;
            }

            string tmp = "Buoc " + to_string(cnt) + ": ";
            for (auto i : a)
                tmp += to_string(i) + " ";
            st.push(tmp);
            cnt++;
        }
        while (!st.empty())
        {
            cout << st.top() << endl;
            st.pop();
        }
    }

    return 0;
}