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

void Build(Tree &t, int x)
{
    if (t == NULL)
    {
        t = AddNode(x);
    }
    else
    {
        if (x < t->data)
        {
            Build(t->pLeft, x);
        }
        else if (x > t->data)
        {
            Build(t->pRight, x);
        }
    }
}
Tree FindMin(Tree t)
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
    if (x > t->data)
    {
        Delete(t->pRight, x);
    }
    else if (x < t->data)
    {
        Delete(t->pLeft, x);
    }
    else
    {
        if (t->pRight == NULL)
        {
            Tree left = t;
            t = t->pLeft;
            delete left;
        }
        else if (t->pLeft == NULL)
        {
            Tree right = t;
            t = t->pRight;
            delete right;
        }
        else
        {
            Tree tmp = FindMin(t->pRight);
            t->data = tmp->data;
            Delete(t->pRight, tmp->data);
        }
    }
}
void Pre(Tree t)
{
    if (t != NULL)
    {
        cout << t->data << " ";
        Pre(t->pLeft);
        Pre(t->pRight);
    }
}
void In(Tree t)
{
    if (t != NULL)
    {
        In(t->pLeft);
        cout << t->data << " ";
        In(t->pRight);
    }
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
int n;
void Input()
{
    Tree t;
    KhoiTao(t);
    while (cin >> n)
    {
        if (n == 1)
        {
            int x;
            cin >> x;
            Build(t, x);
        }
        else if (n == 2)
        {
            int x;
            cin >> x;
            Delete(t, x);
        }
        else if (n == 3)
        {
            Pre(t);
            cout << endl;
        }
        else if (n == 4)
        {
            In(t);
            cout << endl;
        }
        else if (n == 5)
        {
            Pos(t);
            cout << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Input();
    return 0;
}