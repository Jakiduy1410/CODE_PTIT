#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        vector<int> max_right(n);
        stack<int> st;
        for(int i = n - 1 ; i >= 0 ; i--){
           while (!st.empty() && a[i] >= st.top())
           {
            st.pop();
           }
           if (st.empty())
           {
            max_right[i] = -1;
           }
           else max_right[i] = st.top();
           
           
            st.push(a[i]);
        } 
        for(auto i : max_right) cout << i << " ";
        cout << endl;
    }
       
    return 0;
}