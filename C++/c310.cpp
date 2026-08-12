#include<bits/stdc++.h>
using namespace std;

void Min(string &s1, string &s2)
{
    
    for(char &c : s1)
    {
        if (c == '6')
        {
            c -= 1;
        }
    }
    for(char &c : s2)
    {
         if (c == '6')
        {
            c -=1;
        }
    }
    
    long long sum = stoll(s1) + stoll(s2);
    cout << sum << " ";
}
void Max(string &s1, string &s2)
{
    
    for(char &c : s1)
    {
        if (c == '5')
        {
            c += 1;
        }
    }
    for(char &c : s2)
    {
         if (c == '5')
        {
            c +=1;
        }
    }
    
    long long sum = stoll(s1) + stoll(s2);
    cout << sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        Min(s1,s2); Max(s1,s2);
        cout << endl;

    }
    
}