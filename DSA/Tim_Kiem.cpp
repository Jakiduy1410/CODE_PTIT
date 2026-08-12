#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        set<int> st;
        for(int i = 0 ; i < n ; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        if (st.find(k) != st.end())
        {
            cout << "1" << endl;
        }
        else cout << "-1" << endl;
        
    } 
    return 0;
}