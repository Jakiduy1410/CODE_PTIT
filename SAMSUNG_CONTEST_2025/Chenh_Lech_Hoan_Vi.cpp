#include <bits/stdc++.h>
using namespace std;
int n;
bool visited[1001];
vector<int> a;

bool Check()
{
    int sum = 0 ;
    for(int i = 0 ; i < n - 1 ; i++)
    {
        sum += (a[i] - a[i+1]);
    }
    return sum >= 0;
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!visited[j])
        {
            a.push_back(j);
            visited[j] = true;

            if (i == n - 1)
            {
                if (Check())
                {
                    for (auto i : a)
                        cout << i << " ";
                    cout << endl;
                  
                }
            }
            else
                Try(i + 1);
            a.pop_back();
            visited[j] = false;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    memset(visited, false, sizeof visited);
    Try(0);
    return 0;
}