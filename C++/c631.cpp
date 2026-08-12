#include <bits/stdc++.h>
using namespace std;

int KhCnt = 0, MhCnt = 0, HdCnt = 0;


struct KH {
    string mkh, tkh, dc;
} khList[35];


struct MH {
    string mmh, tmh, dvt;
    int gm, gb;
} mhList[55];

class KhachHang {
public:
    string mkh, tkh, gt, ns, dc;

    friend istream& operator>>(istream& is, KhachHang& X) {
        if (KhCnt == 0) cin.ignore();
        KhCnt++;
        X.mkh = "KH" + string(3 - to_string(KhCnt).length(), '0') + to_string(KhCnt);
        getline(is, X.tkh);
        getline(is, X.gt);
        getline(is, X.ns);
        getline(is, X.dc);
        khList[KhCnt - 1] = {X.mkh, X.tkh, X.dc};
        return is;
    }
};

class MatHang {
public:
    string mmh, tmh, dvt;
    int gm, gb;

    friend istream& operator>>(istream& is, MatHang& X) {
        MhCnt++;
        X.mmh = "MH" + string(3 - to_string(MhCnt).length(), '0') + to_string(MhCnt);
        cin.ignore();
        getline(is, X.tmh);
        getline(is, X.dvt);
        cin >> X.gm >> X.gb;
        mhList[MhCnt - 1] = {X.mmh, X.tmh, X.dvt, X.gm, X.gb};
        return is;
    }
};

class HoaDon {
public:
    string mhd, mkh, mmh;
    int sl;

    friend istream& operator>>(istream& is, HoaDon& X) {
        HdCnt++;
        X.mhd = "HD" + string(3 - to_string(HdCnt).length(), '0') + to_string(HdCnt);
        is >> X.mkh >> X.mmh >> X.sl;
        return is;
    }

    friend ostream& operator<<(ostream& os, HoaDon X) {
        os << X.mhd << " ";

        KH kh;
        for (int i = 0; i < KhCnt; ++i) {
            if (khList[i].mkh == X.mkh) {
                kh = khList[i];
                break;
            }
        }

        MH mh;
        for (int i = 0; i < MhCnt; ++i) {
            if (mhList[i].mmh == X.mmh) {
                mh = mhList[i];
                break;
            }
        }

        os << kh.tkh << " " << kh.dc << " "
           << mh.tmh << " " << mh.dvt << " "
           << mh.gm << " " << mh.gb << " "
           << X.sl << " " << (X.sl * mh.gb) << endl;
        return os;
    }
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}