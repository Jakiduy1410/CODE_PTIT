#include <bits/stdc++.h>
using namespace std;
int n,m;
bool visited[1001];
vector<int> a;

void Try(int i)
{
    for(int j = 1 ; j <= n ; j++)
    {
        if(!visited[j])
        {
            if(a.size() > 1 && a[0] != m) return;
            a.push_back(j);
            visited[j] = true;
            if (i == n-1)
            {
                for(auto i : a) cout << i << " ";
                cout << endl;
            }
            else Try(i+1);
            a.pop_back();
            visited[j] = false;
            

        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;   
    memset(visited , false , sizeof visited);
    Try(0);
    return 0;
}