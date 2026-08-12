#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* pLeft;
    struct Node* pRight;
};
typedef Node* Tree;

void KhoiTao(Tree &t)
{
    t = NULL;
}

Tree AddNode(int x)
{
    Tree p = new Node;
    p->data = x;
    p->pLeft = p->pRight = NULL;
    return p;
}

void Build(Tree &t , vector<int> in, vector<int> lev)
{
    if (in.empty())
    {
        return;
    }

    int val = lev[0];
    t = AddNode(val);
    vector<int> left_in , right_in;
    set<int> st;
    int k = 0;
    while (k < in.size() && in[k] != val)
    {
        k++;
    }

    for(int i = 0 ; i < k ; i++)
    {
        left_in.push_back(in[i]);
        st.insert(in[i]);
    }
    for(int i = k+1 ; i < in.size() ; i++)
    {
        right_in.push_back(in[i]);
    }

    vector<int> left_lev,right_lev;
    for(int i = 1 ; i < lev.size() ; i++)
    {
        if (st.find(lev[i]) != st.end())
        {
            left_lev.push_back(lev[i]);
        }
        else right_lev.push_back(lev[i]);
        
    }
    Build(t->pLeft,left_in,left_lev);
    Build(t->pRight,right_in,right_lev);
}

void Pos(Tree t)
{
    if (t != NULL)
    {
        Pos(t->pLeft);
        Pos(t->pRight);
        cout << t->data << " ";
    }
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> in(n),lev(n);
        for (int i = 0; i < n; i++)
        {
            cin >> in[i];
        }
        for(int i = 0 ; i < n ; i++)
        {
            cin >> lev[i];
        }
        Tree t;
        KhoiTao(t);
        Build(t,in,lev);
        Pos(t);
        cout << endl;
    }
       
    return 0;
}