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
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        stack<int> st;
        vector<int> res(n);
   
        for(int i = 0 ; i < n ; i++){
            while (!st.empty() && a[i] >= a[st.top()])
            {
                st.pop();
            }
            
            if (st.empty())
            {
                res[i] = i + 1;
            }
            else
            {
                res[i] = i - st.top();
            }
            
            st.push(i);
        }
        for(auto i : res) cout << i << " ";
        cout << endl;
    }
       
    return 0;
}