#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sum = 0,check = 0;
        vector<char> a;
        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]))
            {
                sum += (s[i] - '0');
            }
            else
            {
                sum += check;
                check = 0;
                a.push_back(s[i]);
            }
        }
        sum += check;
        sort(a.begin(), a.end());
        for(auto c : a)
        {
            cout << c;
        }
        cout << sum << endl;

    }
    
}