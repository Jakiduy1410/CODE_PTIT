#include <bits/stdc++.h>
using namespace std;

string Gen_Binary(string s, int size)
{
    string temp;
    int i = size - 1;
    while (i >= 0 && s[i] == '1')
    {
        // Duyệt qua xâu tìm vị trí đầu tiên là số 0
        i--;
    }
    if (i < 0)
    {
        // Nếu cả xâu đều là 1 thì sang độ dài mới
        temp = string(size + 1, '0');
        return temp;
    }
    s[i] = '1';
    // Đánh dấu vị trí 0 thành 1;
    for (int j = i + 1; j < size; j++)
    {
        // Tất cả các vị trí sau đều trở lại thành 0
        s[j] = '0';
    }

    return s;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int size;
        cin >> s;
        size = s.size();
        cout << Gen_Binary(s, size) << endl;
    }
}