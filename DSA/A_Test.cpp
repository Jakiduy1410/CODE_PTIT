#include<iostream>
#include<cstring>
#include<climits>
#include<vector>
#include<algorithm>

using namespace std;

int n;
bool visited[11];
int a[11][11];
int res = INT_MAX;
vector<vector<int>> kq; 
int path[11];

void Try(int i , int sum)
{
    if (i == n + 1) 
    {
        if (sum < res)
        {
            res = sum;
            kq.clear(); 
            
            vector<int> current_best_path;
            for(int j = 1 ; j <= n ; j++)
            {
                current_best_path.push_back(path[j]);
            }
            kq.push_back(current_best_path); 
        }
        else if (sum == res)
        {
            vector<int> current_best_path;
            for(int j = 1 ; j <= n ; j++)
            {
                current_best_path.push_back(path[j]);
            }
            kq.push_back(current_best_path);
        }
    }
    else
    {
        for (int j = 1; j <= n; j++) 
        {
            if (!visited[j])
            {
                if (sum + a[i][j] <= res) { 
                    path[i] = j; 
                    visited[j] = true;
                    Try(i + 1 , sum + a[i][j]); 
                    visited[j] = false;
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    
    fill(visited, visited + n + 1, false); 
    
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            cin >> a[i][j];
        }
    }

    Try(1 , 0);

   
    if (res != INT_MAX && !kq.empty()) {
        for (const auto& solution : kq) {
            for (int i = 0; i < n; ++i) { 
                int person_index = i + 1;
                int job_assigned = solution[i]; 

                cout << "Man" << person_index << "->Job" << job_assigned;

                if (i < n - 1) {
                    cout << " || ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}