#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    while (q--)
    {
        int x;
        cin >> x;
        auto small = st.lower_bound(x);
        small--;
        if (small != st.end())
        {
            cout << *small << " ";
        }
        else cout << 0 << " ";
        auto big = st.upper_bound(x);
        if (big != st.end())
        {
            cout << *big;
        }
        else cout << 0;
        cout << endl;
    }

    return 0;
}