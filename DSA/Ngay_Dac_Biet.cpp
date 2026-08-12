#include<bits/stdc++.h>

using namespace std;

vector<char> a = {'0' , '2'};
vector<string> res;
vector<char> b;
const int n = 8;

bool Check()
{
    string temp = string(b.begin(),b.end());
    string tmp = temp;
    if (temp[4] == '0' || temp[3] == '0')
    {
        return false;
    }
    // reverse(temp.begin(),temp.end());
    // if (temp != tmp)
    // {
    //     return false;
    // }
    
    
    return true;
}

void In()
{
    string ngay = string(b.begin(),b.begin() + 2);
    string thang = string(b.begin() + 2,b.begin() + 4);
    string nam = string(b.begin() + 4 , b.end());
    if (thang == "22" || ngay == "00")
    {
        return;
    }
    
    cout << ngay << "/" << thang << "/" << nam << endl; 

}

void Try(int i)
{
    for(int j = 0 ;  j < a.size() ; j++)
    {
        b.push_back(a[j]);
        if (i == n)
        {
            if (Check())
            {
                In();
            }
            
        }
        else Try(i+1);
        b.pop_back();
        
    }
}

int main()
{
 Try(1);
}