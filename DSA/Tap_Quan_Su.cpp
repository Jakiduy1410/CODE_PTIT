#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int> a;
set<int> st;

void Comb()
{
    int cnt = 0;
    int i = k - 1;
    while (i >= 0 && a[i] == n - k + i + 1)
    {
        i--;
    }

    if (i < 0)
    {
        cout << k << endl;
        return;
    }
    else{
        a[i]++;
        for(int j = i + 1 ; j < k ; j++) a[j] = a[j-1] + 1;
        for(int j = 0 ; j < k ; j++)
        {
            if (st.find(a[j]) == st.end())
            {
                cnt++;
            }
            
        }
        cout << cnt << endl;
    }
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        a.resize(k);
        a.clear();
        st.clear();
        for(int i = 0 ; i < k ; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        Comb();
    }
       
    return 0;
}