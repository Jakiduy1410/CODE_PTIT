#include <bits/stdc++.h>
using namespace std;

bool Check(vector<char> s , int l , int r)
{
    stack<int> st;
    for(int i = l ; i <= r ; i++)
    {
        char c = s[i];
        if (c == '(')
        {
            st.push(i);
        }
        else{
            if(st.empty()) return false;
            else{
                st.pop();
            }
        }
    }
    if(st.empty()) return true;
    else return false;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;  
    cin >> n >> m; 
    vector<char> s(n);
    for(int i = 0 ; i < n ; i++) cin >> s[i];
    while (m--)
    {
        int a,l,r;
        cin >> a >> l >> r;
        l--;
        r--;
        if (a == 1)
        {
            swap(s[l] , s[r]);
        }
        else if(a == 2)
        {
            if(Check(s , l , r)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        
    }
    
    return 0;
}