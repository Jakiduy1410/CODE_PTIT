#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n , k ;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        deque<int> q;
        for(int i = 0 ; i < n ; i++)
        {
            //Nếu phần tử ngoài cửa sổ thì pop ra
            if (!q.empty() && q.front() < i - k + 1)
            {
                q.pop_front();
                //Vì nó đến trước nên pop front
            }
            //Nếu trong cửa sổ đó có phần tử lớn hơn thì pop phần tử bé ra ngoài
            while (!q.empty() && a[q.back()] < a[i])
            {
                q.pop_back();
            }
            
        
            q.push_back(i);
            if (i >= k - 1)
            {
                //Bắt đầu in từ kết thúc của cửa sổ 1
                cout << a[q.front()] << " ";
            }
            
        }
        cout << endl;
    }
       
    return 0;
}