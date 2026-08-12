#include <bits/stdc++.h>
using namespace std;

int n, pos;
int in[10001];
int lev[10001];

struct Node
{
    int data;
    struct Node *pLeft;
    struct Node *pRight;
};

typedef Node* Tree;

void KhoiTao(Tree &t)
{
    t = NULL;
}

Tree Build(vector<int> &in ,vector<int> &lev)
{
    if (lev.empty() || in.empty())
    {
        return NULL;
    }
    

    Tree p = new Node;
    p->data = lev[0];
    p->pLeft = p->pRight = NULL;
    int root = lev[0];
    int mid = 0;
    while (mid < in.size() && in[mid] != root)
    {
        mid++;
    }
    
    vector<int> inLeft(in.begin(), in.begin()+mid);
    vector<int> inRight(in.begin()+mid+1, in.end());
    
    vector<int> levLeft, levRight;
    for(int i = 1 ; i < lev.size() ; i++)
    {
        if (find(inLeft.begin(),inLeft.end(),lev[i]) != inLeft.end())
        {
            levLeft.push_back(lev[i]);
        }
        else levRight.push_back(lev[i]);
    }
    
    p->pLeft = Build(inLeft,levLeft);
    p->pRight = Build(inRight,levRight);
    return p;
}

void PostOrder(Tree t)
{
    if (t != NULL)
    {
        PostOrder(t->pLeft);
        PostOrder(t->pRight);
        cout << t->data << " ";
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> in(n), lev(n);
        for(int i = 0 ; i < n ; i++) cin >> in[i];
        for(int i = 0 ; i < n ; i++) cin >> lev[i];
        pos = 0;
        Tree t;
        KhoiTao(t);
        t = Build(in,lev);
        PostOrder(t);
        cout << endl;

    }   
    return 0;
}