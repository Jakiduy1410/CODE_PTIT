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
        set<int> st;
        for(int i = 0 ; i < n ; i++){
            int x;
            cin >> x;
            st.insert(x);
        }
        if (st.size() == 1)
        {
            cout <<"-1" << endl;
        }else{
            vector<int> a(st.begin() , st.end());
            cout << a[0] << " " << a[1] << endl;
            
        }
        
        

    }
       
    return 0;
}