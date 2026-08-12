#include <bits/stdc++.h>
using namespace std;
int n;
set<string> res;
string s;
vector<pair<int, int>> p;
vector<bool> removed;

void In()
{
    string tmp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (!removed[i])
        {
            tmp += s[i];
        }
    }
    if (tmp != s)
    {
        res.insert(tmp);
    }
}
void Try(int i)
{
    if (i == n)
    {
        In();
        return;
    }

    Try(i + 1);
    removed[p[i].first] = true;
    removed[p[i].second] = true;
    Try(i + 1);
    removed[p[i].first] = false;
    removed[p[i].second] = false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> s;
    stack<int> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(i);
        }
        else if (s[i] == ')')
        {
            p.push_back({st.top(), i});
            st.pop();
        }
    }
    n = p.size();
    removed.resize(s.size(), false);
    Try(0);
    for (string i : res)
    {
        cout << i << endl;
    }

    return 0;
}