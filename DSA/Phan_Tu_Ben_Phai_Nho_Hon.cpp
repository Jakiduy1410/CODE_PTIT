#include <bits/stdc++.h>
using namespace std;
vector<int> b,c;

void NGE(vector<int> &a)
{
    b.clear();
    stack<int> st;
    st.push(-1);
    for (int i = a.size() - 1; i >= 0; i--)
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
void NSE(vector<int> &a){
    c.clear();
    stack<int> st;
    st.push(-1);
    for (int i = a.size() - 1; i >= 0; i--)
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
        NGE(a);
        NSE(a);
        for(int i = 0 ; i < n ; i++)
        {
            int pos_nge = b[i];
            if (pos_nge == -1)
            {
                cout << "-1" << " ";
            }
            else
            {
                int pos_nse = c[pos_nge];
                if (pos_nse == -1)
                {
                    cout << "-1 ";
                }
                else cout << a[pos_nse] << " ";
                
            }
            
        }

       
        cout << endl;
    }

    return 0;
}