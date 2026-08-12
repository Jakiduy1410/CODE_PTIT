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
        vector<string> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stack<long long> st;
        for(int i = n - 1 ; i >= 0 ; i--)
        {
            if(a[i] == "+" || a[i] == "-" || a[i] == "*" || a[i] == "/")
            {
                long long op1 = st.top();st.pop();
                long long op2 = st.top(); st.pop();
                long long ans = 0;
                if(a[i] == "+") ans = op1+op2;
                else if(a[i] == "-") ans = op1-op2;
                else if(a[i] == "*") ans = op1*op2;
                else if(a[i] == "/") ans = op1/op2;
                st.push(ans);
            }
            else{
                long long num = stoll(a[i]);
                st.push(num);
            }
        }
        cout << st.top() << endl;
    }
       
    return 0;
}