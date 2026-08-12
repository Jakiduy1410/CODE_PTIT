#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    stack<string> st;
    int cnt = 0;
    for(int i = 0 ; i < n ; i++)
    {
        int pos = i;
        while (pos >= 0 && a[pos] < a[pos-1])
        {
            swap(a[pos] , a[pos-1]);
            pos--;
        }
        
        string tmp = "Buoc " + to_string(cnt) + ": ";
        for(int i = 0 ; i <= cnt ; i++) tmp += to_string(a[i]) + " ";
        st.push(tmp);
        cnt++;
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    
    return 0;
}