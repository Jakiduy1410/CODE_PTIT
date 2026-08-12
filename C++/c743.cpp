#include<sstream>
#include<vector>
#include<string>
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s,a;
        getline(cin, s);
        vector<string> word;
        stringstream ss(s);
        while (ss >> s)
        {
            word.push_back(s);
        }
        
        for(int i = word.size()-1; i >= 0 ; i-- )
        {
            cout << word[i] << " ";
        }
        cout << endl;
    }
    
}