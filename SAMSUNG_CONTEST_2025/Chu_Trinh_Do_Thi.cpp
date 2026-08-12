#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5+2;
vector<int> adj[MAXN];
int visited[MAXN];
map<string,int> mp;
int id = 0;

int GetId(string a)
{
    if (mp.find(a) == mp.end())
    {
        return mp[a] = ++id;
    }
    else return mp[a];
    
}

bool Possible(int u)
{
    visited[u] = 1;
    for(int i : adj[u])
    {
        if (visited[i] == 1)
        {
            return false;
        }
        if (visited[i] == 0)
        {
            if (Possible(i) == false)
            {
                return false;
            }
            
        }
    }
    visited[u] = 2;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    memset(visited,0,sizeof visited);
    while (n --)
    {
        string nameA , order , nameB;
        cin >> nameA >> order >> nameB;
        int idA = GetId(nameA);
        int idB = GetId(nameB);
        if (order == ">")
        {
            adj[idB].push_back(idA);
        }
        else adj[idA].push_back(idB);
    }

    bool ok = true;
    for(int i = 1 ; i <= id ; i++)
    {
        if (visited[i] == 0)
        {
            if(Possible(i) == false)
            {
                ok = false;
                break;
            }
        }
        
    }

    if (ok)
    {
        cout << "possible" << endl;
    }
    else cout << "impossible" << endl;
    

       
    return 0;
}