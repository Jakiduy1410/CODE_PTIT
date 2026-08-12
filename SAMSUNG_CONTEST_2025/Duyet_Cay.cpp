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

Tree Build(Tree &t, string s)
{
    if (s.empty())
    {
        return NULL;
    }

    stringstream ss(s);
    string word;
    ss >> word;
    if (t == NULL)
    {
        t = AddNode(stoll(word));
    }

    queue<Tree> q;
    q.push(t);
    while (!q.empty())
    {
        Tree tmp = q.front();
        q.pop();
        if (ss >> word)
        {
            if (word != "N")
            {
                Tree left;
                left = AddNode(stoll(word));

                tmp->pLeft = left;
                q.push(left);
            }
        }
        if (ss >> word)
        {
            if (word != "N")
            {
                Tree right;
                right = AddNode(stoll(word));

                tmp->pRight = right;
                q.push(right);
            }
        }
    }

    return t;
}

void RNL(Tree t)
{
    if (t != NULL)
    {
        RNL(t->pRight);
        cout << t->data << " ";
        RNL(t->pLeft);
    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        Tree t;
        KhoiTao(t);
        int n = s.size();
        t = Build(t, s);
        RNL(t);
        cout << endl;
    }

    return 0;
}