#include<bits/stdc++.h>

using namespace std;


int n;
bool check[1001];
vector<int> a;

void Try(int i)
{
    if (i > n)
    {
        for(int i = 0 ; i < a.size() ; i++) cout << a[i];
        cout << endl;
    }
    else{
        for(int j = 1 ; j <= n ; j++)
        {
            if (!check[j])
            {
                a.push_back(j);
                if (a.size() > 1 && (abs(a.back() - a[a.size()-2])) == 1)
                {
                    a.pop_back();
                    continue;
                }
                
                check[j] = true;
                Try(i+1);
                check[j] = false;
                a.pop_back();
            }
            
        }
    }
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        memset(check,false,sizeof(check));
        Try(1);
    }
    
}