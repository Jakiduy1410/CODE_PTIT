#include<bits/stdc++.h>

using namespace std;

string Generate(int a , int x)
{
    string s;
    s += to_string(a,x);
    return s;
}


int main()
{
    int a,x,y;
    cin >> a >> x >> y;

    cout << Generate(a,x);

}