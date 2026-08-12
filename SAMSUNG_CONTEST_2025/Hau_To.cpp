#include <bits/stdc++.h>
using namespace std;

long long Posfix(vector<string> s)
{
    int n = s.size();
    stack<long long> st;
    for (int i = 0; i < n; i++)
    {
        string tmp = s[i];
        if(tmp == "+" || tmp == "-" || tmp == "*" || tmp == "/")
        {
            long long op1 = st.top(); st.pop();
            long long op2 = st.top(); st.pop();
            long long res;
            if(tmp == "+") res = op1 + op2;
            else if(tmp == "-") res = op2 - op1;
            else if(tmp == "*") res = op1 * op2;
            else if(tmp == "/"){
                if (op1 == 0)
                {
                    res = 0;
                }
                else res = op2 / op1;
            }
            st.push(res);
        }
        else{
            long long num = stoll(tmp);
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
        vector<string> s(n);
        for(int i = 0 ; i < n ; i++) cin >>  s[i];
        cout << Posfix(s) << endl;
    }
       
    return 0;
}