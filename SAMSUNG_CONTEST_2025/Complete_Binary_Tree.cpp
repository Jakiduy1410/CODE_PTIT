#include <bits/stdc++.h>
using namespace std;

void Inorder(vector<int> &a, int i)
{
    int n = a.size();
    if(i < n)
    {
        Inorder(a, i * 2 + 1);
        cout << a[i] << " ";
        Inorder(a, i * 2 + 2);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Inorder(a, 0);
        cout << endl;
    }

    return 0;
}