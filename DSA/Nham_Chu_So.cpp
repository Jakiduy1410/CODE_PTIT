#include<bits/stdc++.h>
using namespace std;

void Gen_Min(string &a, string &b)
{
    size_t pos = 0;
    while ((pos = a.find('6')) != string::npos)
    {
        a[pos] = '5';
    }
    pos = 0;
    while ((pos = b.find('6')) != string::npos)
    {
        b[pos] = '5';
    }
}

void Gen_Max(string &a, string &b)
{
    size_t pos = 0;
    while ((pos = a.find('5')) != string::npos)
    {
        a[pos] = '6';
    }
    pos = 0;
    while ((pos = b.find('5')) != string::npos)
    {
        b[pos] = '6';
    }
}

int main()
{
    string a, b;
    cin >> a >> b;
    
    string a1 = a, b1 = b;
    Gen_Min(a1, b1);
    cout << stoll(a1) + stoll(b1) << " ";
    
    string a2 = a, b2 = b;
    Gen_Max(a2, b2);
    cout << stoll(a2) + stoll(b2);
    
    return 0;
}