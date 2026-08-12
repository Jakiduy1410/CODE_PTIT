#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); 
    while (t--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        vector<int> numbers;
        int n;
        while (ss >> n)
        {
            numbers.push_back(n);
        }
        int chan = 0, le = 0;
        for(auto i : numbers)
        {
          if (i % 2 == 0)
          {
            chan++;
          }
          else le++;
          
        }

        if ((numbers.size() % 2 == 0 && chan > le) || (numbers.size() % 2 == 1 && le > chan))
        {
            cout << "YES";

        }
        else cout << "NO";
        cout << endl;
    }
    
}