#include <bits/stdc++.h>
using namespace std;

set<string> st;
int check[100];
int n, k;
vector<string> res;

void Try(int i, vector<string> a, int x)
{
    for (int j = x; j < a.size(); j++)
    {

        res.push_back(a[j]);

        if (i == k)
        {
            for (int i = 0; i < res.size(); i++)
            {
                cout << res[i] << " ";
            }
            cout << endl;
        }
        else
            Try(i + 1, a, j + 1);

        res.pop_back();
    }
}

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        st.insert(s);
    }
    vector<string> a(st.begin(), st.end());
    Try(1, a, 0);
}