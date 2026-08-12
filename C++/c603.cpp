#include <bits/stdc++.h>
using namespace std;

class SinhVien
{
private:
    string msv, ten, ngaySinh, lop;
    float gpa;

public:
    SinhVien()
    {
        msv = ten = lop = ngaySinh = "";
        gpa = 0;
    }

    void ChuanHoa_HoTen(string &s)
    {
        string word;
        vector<string> name;
        stringstream ss(s);
        while (ss >> word)
        {
            word[0] = toupper(word[0]);
            for (int i = 1; i < word.size(); i++)
            {
                word[i] = tolower(word[i]);
            }
            name.push_back(word);
        }
        s.erase();
        for (int i = 0; i < name.size(); i++)
        {
            if (i > 0)
            {
                s += " ";
            }
            s += name[i];
        }
    }
    void ChuanHoa_NgaySinh(string &s)
    {
        
            if (s[1] == '/')
            {
                s.insert(0, "0");
            }
            if (s[4] == '/')
            {
                s.insert(3, "0");
            }
        
    }

    friend istream &operator>>(istream &is, SinhVien &a)
    {
        a.msv = "B20DCCN001";
        getline(is, a.ten);
        a.ChuanHoa_HoTen(a.ten);
        is >> a.lop >> a.ngaySinh >> a.gpa;
        a.ChuanHoa_NgaySinh(a.ngaySinh);
        return is;
    }

    friend ostream &operator<<(ostream &os, SinhVien a)
    {
         os << a.msv << " " 
        << a.ten << " " << 
        a.lop << " " << a.ngaySinh <<
        " " << fixed << setprecision(2) << a.gpa;
        return os;
    }
};

int main()
{
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
