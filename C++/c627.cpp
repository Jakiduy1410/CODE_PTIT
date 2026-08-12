#include <bits/stdc++.h>
using namespace std;

class GiangVien
{
public:
    string ten, tenhoa, mon, monvt, ma;

    GiangVien()
    {
        ten = tenhoa = mon = monvt = ma = "";
    }

    string SinhMaGV(int n)
    {
        string s;
        s = "GV" + string(2 - to_string(n).size(), '0') + to_string(n);
        return s;
    }

    string VietHoa(string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
        return s;
    }

    string LayTen(string s)
    {
        string res;
        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            res += toupper(word[0]);
        }
        return res;
    }

    friend istream &operator>>(istream &is, GiangVien &a)
    {
        static int stt = 1;
        getline(is, a.ten);
        getline(is, a.mon);
        a.ma = a.SinhMaGV(stt++);
        a.tenhoa = a.VietHoa(a.ten);
        a.monvt = a.LayTen(a.mon);
        return is;
    }

    friend ostream &operator<<(ostream &os, GiangVien a)
    {
        os << a.ma << " " << a.ten << " " << a.monvt << endl;
        return os;
    }
};

bool Check(string s, GiangVien &a)
{
    string temp = s;
    for (char &c : temp)
        c = toupper(c);

    if (a.tenhoa.find(temp) != string::npos)
    {
        return true;
    }

    return false;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    GiangVien ds[50];
    for (int i = 0; i < n; i++)
    {
        cin >> ds[i];
    }

    int q;
    cin >> q;
    cin.ignore();
    vector<string> arr;
    for (int i = 0; i < q; i++)
    {
        string s;
        getline(cin, s);
        arr.push_back(s);
    }

    for (int i = 0; i < q; i++)
    {
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << arr[i] << ":" << endl;
        for (int j = 0; j < n; j++)
        {
            if (Check(arr[i], ds[j]))
            {
                cout << ds[j];
            }
        }
    }
    return 0;
}