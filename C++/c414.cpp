#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        /* int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        } */
        string s;
        getline(cin, s);
        vector<char> num;
        for (char c : s)
        {
            if (c != ' ')
            {
                num.push_back(c);
            }
        }
        sort(num.begin(), num.end());
        int newSize = unique(num.begin(),num.end()) - num.begin();
        for(int i = 0 ; i < newSize;i++)
        {
            cout << num[i] << " ";
        }
        cout << endl;
    }
}