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
Tree AddNode(int x)
{
    Tree p = new Node;
    p->data = x;
    p->pLeft = p->pRight = NULL;
    return p;
}

void Insert(Tree &t, int x)
{
    if (t == NULL)
    {
        t = AddNode(x);
    }
    else
    {
        if (x < t->data)
        {
            Insert(t->pLeft, x);
        }
        else if (x > t->data)
            Insert(t->pRight, x);
    }
}

Tree FindSon(Tree t)
{
    while (t->pLeft != NULL)
    {
        t = t->pLeft;
    }
    return t;
}
void Delete(Tree &t, int x)
{
    if (t == NULL)
        return;

    if (t != NULL)
    {
        if (x < t->data)
        {
            Delete(t->pLeft, x);
        }
        else if (x > t->data)
        {
            Delete(t->pRight, x);
        }
        else
        {
            if (t->pLeft == NULL)
            {
                Tree tmp = t;
                t = t->pRight;
                delete tmp;
            }
            else if (t->pRight == NULL)
            {
                Tree tmp = t;
                t = t->pLeft;
                delete tmp;
            }
            else
            {
                Tree tmp = FindSon(t->pRight);
                t->data = tmp->data;
                Delete(t->pRight, tmp->data);
            }
        }
    }
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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    Tree t;
    KhoiTao(t);
    for (int i = 1; i <= q; i++)
    {
        string ord;
        int x;
        cin >> ord >> x;
        if (ord == "ins")
        {
            Insert(t, x);
        }
        else
        {

            Delete(t, x);
        }
        cout << "Query #" << i << ": ";
        PreOrder(t);
        cout << endl;
    }

    return 0;
}