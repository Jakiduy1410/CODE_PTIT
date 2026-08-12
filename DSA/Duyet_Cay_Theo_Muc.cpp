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
int par, son;
char c;
void ThemNode(Tree &t)
{
    if (t == NULL)
    {
        t = new Node;
        t->data = par;
        t->pLeft = t->pRight = NULL;
    }
    if (t->data == par)
    {
        Tree p = new Node;
        p->data = son;
        if (c == 'L')
        {
            t->pLeft = p;
        }
        else
            t->pRight = p;
        return;
    }
   
    if (t->pLeft != NULL) ThemNode(t->pLeft);
    if (t->pRight != NULL) ThemNode(t->pRight);
}
void LevelOrder(Tree t)
{
    if (t == NULL)
    {
        return;
    }
    
    queue<Tree> q;
    q.push(t);
    while (!q.empty())
    {
        Tree p = q.front();
        q.pop();
        cout << p->data << " ";

        if (p->pLeft != NULL)
        {
            q.push(p->pLeft);
        }
        if (p->pRight != NULL)
            q.push(p->pRight);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Tree t;
        KhoiTao(t);
        for (int i = 0; i < n; i++)
        {
            cin >> par >> son >> c;
            ThemNode(t);
        }
        LevelOrder(t);
        cout << endl;
    }

    return 0;
}