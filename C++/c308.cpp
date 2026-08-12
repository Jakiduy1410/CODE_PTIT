#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s,a;
    cin >> s;
    sort(s.begin(),s.end());
    for (int i = 0; i < s.size() - 1; i++)
        {
            if(s[i] == s[i + 1])
            {
                
                while (i < s.size() - 1 && s[i] == s[i + 1])
                {
                    s.erase(i+1);

                }
            }
        }
        cout << s;
}