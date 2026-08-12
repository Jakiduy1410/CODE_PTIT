#include <bits/stdc++.h>
using namespace std;

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
        Tree p = new Node;
        p->data = x;
        p->pLeft = NULL;
        p->pRight = NULL;
        t = p;
    }
    else
    {
        if (x < t->data)
        {
            ThemNode(t->pLeft, x);
        }
        else if (x > t->data)
            ThemNode(t->pRight, x);
    }
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for(int i = 1 ; i <= t ; i++)
    {
        int n;
        cin >> n;
        Tree t;
        KhoiTao(t);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ThemNode(t, x);
        }
        cout << "Test #" << i << ": ";
        PostOrder(t);
        cout << endl;
    }

    return 0;
}