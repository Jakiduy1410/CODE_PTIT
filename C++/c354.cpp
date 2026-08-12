#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        int cnt = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i+1])
            {
                cnt++;
            }
            else{
                cout << s[i] << cnt;
                cnt = 1;
            }
            
        }
        cout << endl;
        
    }
    
}