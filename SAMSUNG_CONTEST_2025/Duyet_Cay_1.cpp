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

void Build(Tree &t, vector<int> &pre, vector<int> &in, int start, int end, int &preIndex)
{
    if (start > end)
        return;

    int val = pre[preIndex];
    t = AddNode(val);
    preIndex++;

    if (start == end)
    {
        return;
    }

    int mid = start;
    int l = start, r = end;
    while (mid <= r && val != in[mid])
    {
        mid++;
    }
    Build(t->pLeft, pre, in, start, mid - 1, preIndex);
    Build(t->pRight, pre, in, mid + 1, end, preIndex);
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
        vector<int> pre(n), in(n);
        for (int i = 0; i < n; i++)
            cin >> in[i];
        for (int i = 0; i < n; i++)
            cin >> pre[i];
        Tree t;
        KhoiTao(t);
        int preI = 0;
        Build(t, pre, in, 0, n - 1, preI);
        Pos(t);
        cout << endl;
    }

    return 0;
}