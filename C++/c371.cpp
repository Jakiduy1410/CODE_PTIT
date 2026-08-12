#include<iostream>
#include<sstream>
#include<string> 
#include<vector>    
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    
    vector<char> nguyenAm = {'u', 'e', 'o', 'a', 'i', 'y'};
    for(char c : s)
    {
        bool check = false;
        for(char i : nguyenAm)
        {
            if(c == i)
            {
                check = true;
                break;
            }
        }
        if(!check)
        {
            cout << "." << c;
        }
    }
    

    
}