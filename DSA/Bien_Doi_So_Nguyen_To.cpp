#include <bits/stdc++.h>
using namespace std;

vector<int> a;
const int MAX = 10000;
int p[10004];

int Check(int a , int b)
{
    int cnt = 0;
    while (a > 0 && b > 0)
    {
        if (a%10 == b%10)
        {
            cnt++;
        }
        a/=10;
        b/=10;
    }
    return cnt == 3;
}

void seive()
{
    for (int i = 0; i <= MAX; i++)
    {
        p[i] = 1;
    }
    p[0] = p[1] = 0;
    for(int i = 2 ; i*i <= MAX ; i++)
    {
        if (p[i])
        {
            for (int j = i*i; j <= MAX; j+= i)
            {
                p[j] = 0;
            }
            
        }
        
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    seive();
    for(int i = 1000 ; i <= 9999 ; i++)
    {
        if (p[i])
        {
            a.push_back(i);
        }
    }
    while (t--)
    {
        int l , r;
        cin >> l >> r;

        queue<int> q;
        int visited[10004];
        memset(visited , -1 , sizeof(visited));
        q.push(l);
        visited[l] = 0;
        while (!q.empty())
        {
            int tmp = q.front();
            q.pop();
            if (tmp == r)
            {
                break;
            }
            
            for(int i = 0 ; i < a.size() ; i++)
            {
                if (Check(tmp,a[i]) && visited[a[i]] == -1)
                {
                    visited[a[i]] = visited[tmp] + 1;
                    q.push(a[i]);
                }
                
            }
        }
        cout << visited[r] << endl;
        
    }
       
    return 0;
}