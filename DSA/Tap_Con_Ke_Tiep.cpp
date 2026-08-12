#include<bits/stdc++.h>

using namespace std;

void Gen_Combination(int n, int k, vector<int> a) {
    // Bắt đầu từ phần tử cuối cùng trong tập con
    int i = k - 1;

    // Tìm vị trí i mà tại đó a[i] chưa đạt giá trị lớn nhất có thể
    // (vì nếu a[i] = n - k + i + 1 thì nó đã "chạm trần")
    while (i >= 0 && a[i] == n - k + i + 1) {
        i--;
    }

    // Nếu i < 0 tức là tất cả phần tử đều "chạm trần"
    // => không thể sinh tổ hợp mới, ta quay về tổ hợp đầu tiên: 1 2 ... k
    if (i < 0) {
        for (int j = 0; j < k; j++) cout << j + 1 << " ";
    } 
    else {
        // Tăng giá trị tại vị trí i lên 1
        a[i]++;

        // Các phần tử sau i sẽ tăng dần liên tiếp
        for (int j = i + 1; j < k; j++) a[j] = a[j - 1] + 1;

        // In ra tổ hợp mới
        for (int j = 0; j < k; j++) cout << a[j] << " ";
    }
    cout << "\n";
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> a(k);
        for(int i = 0 ; i < k ; i++) cin >> a[i];
        Gen_Combination(n,k,a);

    }
    
}