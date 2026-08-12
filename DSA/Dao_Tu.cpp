#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        stack<string> st;
        string word;
        while (ss >> word)
        {
            st.push(word);
        }
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }

        cout << endl;
    }

    return 0;
}