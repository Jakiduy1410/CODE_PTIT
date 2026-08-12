#include <bits/stdc++.h>
using namespace std;
vector<char> de102 = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
vector<char> de101 = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);

        string ma;
        ma = s.substr(0, 3);
        //cout << ma << endl;
        s.erase(0, 4);
        stringstream ss(s);
        vector<char> dapan;
        char a;
        while (ss >> a)
        {
            dapan.push_back(a);
        }
        int cnt = 0;
        if (ma == "101")
        {
            for (int i = 0; i < dapan.size(); i++)
                if (dapan[i] == de101[i])
                    cnt++;
        }
        else if (ma == "102")
        {
            for (int i = 0; i < dapan.size(); i++)
                if (dapan[i] == de102[i])
                    cnt++;
        }

        double res = double(10.0 / 15) * cnt;
        cout << fixed << setprecision(2) << res << endl;
    }

    return 0;
}
