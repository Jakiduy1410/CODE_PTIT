#include <bits/stdc++.h>
using namespace std;
int n;
vector<string> s;
string a;
vector<string> tmp;
bool visited[1001];
void Try(int i)
{
    for (int j = 0; j < n; j++)
    {
        if (!visited[j])
        {
            tmp.push_back(s[j]);
            visited[j] = true;
            if (i == n - 1)
            {
                if (tmp.back() == a)
                {
                    for (auto i : tmp)
                        cout << i << " ";
                    cout << endl;
                }
            }
            else
                Try(i + 1);
            tmp.pop_back();
            visited[j] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    s.resize(n);
    memset(visited, false, sizeof visited);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    cin >> a;
    sort(s.begin(), s.end());
    Try(0);
    return 0;
}