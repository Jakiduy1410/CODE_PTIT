#include<bits/stdc++.h>
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
        getline(cin, a);
        
        set<string> S1, S2;
        string word;
        stringstream ss1(s);
        while (ss1 >> word) S1.insert(word);
        stringstream ss2(a);
        while (ss2 >> word) S2.insert(word);
        vector<string> res;
        for (const auto& w : S1) {
            if (S2.find(w) == S2.end()) res.push_back(w);
        }
        sort(res.begin(), res.end());
        for (const auto& w : res) cout << w << " ";
        cout << "\n";
        
    }
    
}