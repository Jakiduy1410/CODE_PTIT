#include <bits/stdc++.h>
using namespace std;
string tmp;
vector<int> res;
bool check[100000];
set<int> st;
string l, r;
bool Check(string a)
{
    if (stoi(a) >= stoi(l) && stoi(a) <= stoi(r))
    {
        return true;
    }
    return false;
}
void Try(int size, int i)
{
    if (i == size)
    {
        if (Check(tmp))
        {

            st.insert(stoi(tmp));
        }
    }
    else
    {
        for (int j = 0; j <= 5; j++)
        {
            if (!check[j])
            {
                tmp.push_back(j + '0');
                check[j] = true;
                Try(size, i + 1);
                tmp.pop_back();
                check[j] = false;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        int n = r.size();
        int i = 1;
        st.clear();
        memset(check, false, sizeof(check));

        while (i <= r.size())
        {
            Try(i, 0);
            i++;
        }
        cout << st.size();
        cout << endl;
    }

    return 0;
}