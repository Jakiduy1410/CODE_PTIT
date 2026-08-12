#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

struct SinhVien
{
    string maSv;
    string hoTen, maLop, ngaySinh;
    float GPA;
};

void ChuanHoaHoTen(string &a)
{
    stringstream ss(a);
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
    a.erase();
    for (int i = 0; i < name.size(); i++)
    {
        if (i > 0)
            a += " ";
        a += name[i];
    }
}

void ChuanHoaNgaySinh(string &a)
{
    if(a.size() >= 6)
    {
        if (a[1] == '/')
        {
            a.insert(0, "0");
        }
        if (a[4] == '/')
        {
            a.insert(3,"0");
        }
        
    }
}

void nhap(SinhVien ds[], int N)
{
    for (int i = 0; i < N; i++)
    {
        if (i < 9)
        {
            ds[i].maSv = "B20DCCN00" + to_string(i + 1);
        }
        else
        {
            ds[i].maSv = "B20DCCN0" + to_string(i + 1);
        }
        cin.ignore();
        getline(cin, ds[i].hoTen);
        ChuanHoaHoTen(ds[i].hoTen);
        getline(cin, ds[i].maLop);
        getline(cin, ds[i].ngaySinh);
        ChuanHoaNgaySinh(ds[i].ngaySinh);
        cin >> ds[i].GPA;
    }
}

void in(SinhVien ds[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << ds[i].maSv << " " << ds[i].hoTen << " " << ds[i].maLop << " " << ds[i].ngaySinh << " ";
        cout << fixed << setprecision(2) << ds[i].GPA << endl;
    }
}

int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}