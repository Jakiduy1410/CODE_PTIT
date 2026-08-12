#include<bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string ten, lop, mail, dn, msv;
    int stt;
};

string ChuanHoaHoTen(string &s)
{
    stringstream ss(s);
    vector<string> name;
    string word;

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
    for(int i = 0 ; i < name.size(); i++)
    {
        if(i > 0)
        {
            s += " ";
        }
        s += name[i];
    }
    return s;
}

void nhap(SinhVien &a, int n)
{
    a.stt = n + 1;
    getline(cin, a.msv);
    getline(cin, a.ten);
    ChuanHoaHoTen(a.ten);
    getline(cin, a.lop);
    getline(cin, a.mail);
    getline(cin, a.dn);
}

bool Cmp_MaSV(const SinhVien &a, const SinhVien &b)
{
    return a.msv < b.msv;
}

void in(const SinhVien &a)
{
    cout << a.stt << " " << a.msv << " " << a.ten << " " 
         << a.lop << " " << a.mail << " " << a.dn << endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<SinhVien> arrSV(n);
    for (int i = 0; i < n; i++)
    {
        nhap(arrSV[i], i);
    }

    sort(arrSV.begin(), arrSV.end(), Cmp_MaSV);

    int q;
    cin >> q;
    cin.ignore();
    vector<string> danhsach(q);
    for (int i = 0; i < q; i++)
    {
        getline(cin, danhsach[i]); // Đổi sang getline để chắc chắn lấy đủ tên doanh nghiệp
    }

    for (int i = 0; i < q; i++)
    {
        for (const auto &j : arrSV)
        {
            if (j.dn == danhsach[i])
            {
                in(j);
            }
        }
    }
    return 0;
}