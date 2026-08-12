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

Tree Build(string s)
{
    if (s.empty() || s[0] == 'N')
    {
        return NULL;
    }

    stringstream ss(s);
    string word;

    ss >> word;
    Tree t = new Node;
    t->data = stoi(word);
    t->pLeft = t->pRight = NULL;

    queue<Tree> q;
    q.push(t);
    while (!q.empty())
    {
        Tree cur = q.front();
        q.pop();
        if (ss >> word)
        {
            if (word != "N")
            {
                Tree leftNode = new Node;
                leftNode->data = stoi(word);
                leftNode->pLeft = leftNode->pRight = NULL;

                cur->pLeft = leftNode;
                q.push(leftNode);
            }
        }

        if (ss >> word)
        {
            if (word != "N")
            {
                Tree rightNode = new Node;
                rightNode->data = stoi(word);
                rightNode->pLeft = rightNode->pRight = NULL;

                cur->pRight = rightNode;
                q.push(rightNode);
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
        t = Build(s);
        RNL(t);
        cout << endl;
    }

    return 0;
}