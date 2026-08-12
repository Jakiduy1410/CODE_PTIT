#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cin.ignore(); 
        vector<string> arr(n);
        for (int i = 0; i < n; i++) {
            getline(cin, arr[i]);
        }
        int cnt = 0;
        for(int i = 0 ; i < n - 1 ; i++)
        {
            int check = 0;
            for(int j = 0 ; j < i ; j++)
            {
                if(arr[i] == arr[j]) check = 1;
            }
            if(check != 0) continue;
            for(int j = i + 1 ; j < n ; j++)
            {
                if(arr[i] == arr[j]) cnt++;
            }
        }
        cout << n - cnt << endl; // Output result for each test case
    }
}