#include <bits/stdc++.h>
using namespace std;

char c;
int n;
vector<char> b;

void Try(char start, int i)
{
    if (i > n)
    {
        for (char x : b)
        {
            cout << x;
        }
        cout << endl;
        return;
    }

    for (char curr = start; curr <= c; curr++)
    {
        b.push_back(curr);
        Try(curr, i + 1);
        b.pop_back();
    }
}

int main()
{
    cin >> c >> n;
    Try('A', 1);
    return 0;
}