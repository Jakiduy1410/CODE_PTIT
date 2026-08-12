#include <bits/stdc++.h>
using namespace std;
int n;
struct Node
{
    int data;
    struct Node *pLeft;
    struct Node *pRight;
};

typedef Node *Tree;

void KhoiTao(Tree &t)
{
    t = NULL;
}

void ThemNode(Tree &t, int x)
{
    if (t == NULL)
    {
        Node *p = new Node;
        p->data = x;
        p->pLeft = NULL;
        p->pRight = NULL;
        t = p;
    }
    else
    {
        if (x > t->data)
        {
            ThemNode(t->pRight, x);
        }
        else if (x < t->data)
        {
            ThemNode(t->pLeft, x);
        }
    }
}
void Input(Tree &t)
{
    int x;
    cin >> x;
    ThemNode(t, x);
}
void PreOrder(Tree t)
{
    if (t != NULL)
    {
        cout << t->data << " ";
        PreOrder(t->pLeft);
        PreOrder(t->pRight);
    }
}
void InOrder(Tree t)
{
    if (t != NULL)
    {
        InOrder(t->pLeft);
        cout << t->data << " ";
        InOrder(t->pRight);
    }
    
}
void PosOrder(Tree t)
{
    if(t != NULL)
    {
        PosOrder(t->pLeft);
        PosOrder(t->pRight);
        cout << t->data << " ";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Tree t;
    KhoiTao(t);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Input(t);
    }
    cout << "Duyet PreOrder : " ; 
    PreOrder(t);
    cout << endl;
    cout << "Duyet InOrder : " ; 
    InOrder(t);
    cout << endl;
    cout << "Duyet PosOrder : " ; 
    PosOrder(t);
    cout << endl;
    return 0;
}