#include <bits/stdc++.h>
using namespace std;


long long Prefix(vector<string> &a , int n)
{
    stack<long long> st;
    for(int i = n - 1 ; i >= 0 ; i--)
    {
        if (a[i] == "+" || a[i] == "-" || a[i] == "*" || a[i] == "/")
        {
            long long op1 = st.top(); st.pop();
            long long op2 = st.top(); st.pop();
            long long res = 0;
            if (a[i] == "+")
            {
                res = op1 + op2;
            }
            else if(a[i] == "-") res = op1 - op2;
            else if(a[i] == "*") res = op1 * op2;
            else if(a[i] == "/") res = op1 / op2;
            st.push(res);
            
        }
        else{
            //string tmp = a[i];
            long long num = stoll(a[i]);
            st.push(num);
        }
        
    }
    long long ans = st.top();
    return ans;
}

long long Postfix(vector<string> &a , int n)
{
    stack<long long> st;
    for(int i = 0; i < n; i++)
    {
        if (a[i] == "+" || a[i] == "-" || a[i] == "*" || a[i] == "/")
        {
            long long op2 = st.top(); st.pop();
            long long op1 = st.top(); st.pop();
            long long res = 0;
            if (a[i] == "+")
            {
                res = op1 + op2;
            }
            else if(a[i] == "-") res = op1 - op2;
            else if(a[i] == "*") res = op1 * op2;
            else if(a[i] == "/") res = op1 / op2;
            st.push(res);
        }
        else
        {
            long long num = stoll(a[i]);
            st.push(num);
        }
    }
    long long ans = st.top();
    return ans;
}

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
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        if(a[0] == "+" || a[0] == "-" || a[0] == "*" || a[0] == "/")
        {
            cout << Prefix(a,n);
        }
        else cout << Postfix(a,n);
        cout << endl;
    }
       
    return 0;
}