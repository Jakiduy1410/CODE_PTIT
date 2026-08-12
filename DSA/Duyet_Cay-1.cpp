#include <bits/stdc++.h>
using namespace std;
int n;
int pre[10001];
int in[10001];

struct Node{
    int data;
    struct Node *pLeft;
    struct Node *pRight;
};

typedef Node* Tree;
void KhoiTao(Tree &t)
{
    t = NULL;
}
Tree Build(int in[], int pre[] , int l, int r , int &pos)
{
    if (l > r)
    {
        return NULL;
    }

    Tree t = new Node;
    t->data = pre[pos];
    t->pLeft = t->pRight = NULL;

    int nodeVal = pre[pos++];
    int mid = l;
    while (mid <= r && nodeVal != in[mid])
    {
        mid++;
    }
    
    t->pLeft = Build(in,pre,l,mid - 1,pos);
    t->pRight = Build(in,pre,mid+1 ,r,pos);
    return t;
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
    while (t--)
    {
        cin >> n;
        for(int i = 0 ; i < n ; i++) cin >> in[i];
        for(int i = 0 ; i < n ; i++) cin >> pre[i];
        //Tree t;
        int pos = 0;
        Tree t;
        KhoiTao(t);
        t = Build(in,pre,0,n-1,pos);
        PostOrder(t);
        cout << endl;
    }
    
    return 0;
}