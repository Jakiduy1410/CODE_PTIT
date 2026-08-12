#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
    string ten,sex,date,diaChi, thue, hdong, mnv;
};

string SinhMaNV(int n)
{
    string s = "";
    if(n < 10)
        s = "0000" + to_string(n);
    else if(n < 100)
        s = "000" + to_string(n);
    else if(n < 1000)
        s = "00" + to_string(n);
    else if(n < 10000)
        s = "0" + to_string(n);
    else
        s = to_string(n);
    return s;
}
int z = 0;
void nhap(NhanVien &a)
{
    if (z == 0)
    {
        cin.ignore();
    }
    z++;
    //cin.ignore();
    static int stt = 1;
    a.mnv = SinhMaNV(stt++);
    getline(cin, a.ten);
    getline(cin, a.sex);
    getline(cin, a.date);
    getline(cin, a.diaChi);
    getline(cin, a.thue);
    getline(cin, a.hdong);
}

bool Cmp(const NhanVien &a, const NhanVien &b)
{
    string da = a.date.substr(6,4) + a.date.substr(3,2) + a.date.substr(0,2);
    string db = b.date.substr(6,4) + b.date.substr(3,2) + b.date.substr(0,2);
    return da < db;
}

void sapxep(NhanVien ds[], int N)
{
    sort(ds, ds+N,Cmp);
}

void inds(NhanVien ds[], int N)
{
    for(int i = 0; i < N; i++)
    {
        cout << ds[i].mnv << " " << ds[i].ten << " " << ds[i].sex << " "
             << ds[i].date << " " << ds[i].diaChi << " " << ds[i].thue << " "
             << ds[i].hdong << endl;
    }
}


int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}