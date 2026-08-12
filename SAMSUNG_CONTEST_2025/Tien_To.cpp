#include <bits/stdc++.h>
using namespace std;

long long Prefix(vector<string> s)
{
    stack<long long> st;
    int n = s.size();
    for(int i = n - 1 ; i >= 0 ; i--)
    {
        string tmp = s[i];
        if (s[i] == "+" || s[i] == "-" || s[i] == "*" || s[i] == "/")
        {
            long long op1 = st.top(); st.pop();
            long long op2 = st.top(); st.pop();
            long long res = 0;
            if(tmp == "+") res = op1 + op2;
            else if(tmp =="-") res = op1 - op2;
            else if(tmp =="*") res = op1 * op2;
            else if(tmp == "/") res = op1 / op2;
            st.push(res);
        }
        else{
            long long num = stoll(tmp);
            st.push(num);
        }
        
    }
    long long ans;
    ans = st.top();
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
        vector<string> s(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> s[i];
        }
        cout << Prefix(s) << endl;
    }
       
    return 0;
}