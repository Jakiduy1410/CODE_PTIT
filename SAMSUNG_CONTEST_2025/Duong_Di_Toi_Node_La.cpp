#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* pLeft;
    struct Node* pRight;
};
typedef Node* Tree;

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
void Build(Tree& t, int u, int v, char direction)
{
    if(t == NULL) return;
    if (t->data == u)
    {
        if (direction == 'L')
        {
            t->pLeft = AddNode(v);
        }
        else t->pRight = AddNode(v);
    }
    else{
        Build(t->pLeft,u,v,direction);
        Build(t->pRight,u,v,direction);
    }   
}

int Snt(int n)
{
    if(n < 2) return 0;
    for(int i = 2 ; i * i <= n ; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int max_count;

void dfsTree(Tree t, int cnt){
    if (t == NULL)
    {
        return;
    }
    if (Snt(t->data))
    {
        cnt++;
    }
    
    if (t->pLeft == NULL && t->pRight == NULL)
    {
        if (cnt > max_count)
        {
            max_count = cnt;
        }
        return;
    }

    dfsTree(t->pLeft,cnt);
    dfsTree(t->pRight,cnt);
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        Tree t;
        KhoiTao(t);
        while (n--)
        {
            int u,v;
            char dir;
            cin >> u >> v >> dir;
            if(t == NULL) t = AddNode(u);

            Build(t,u,v,dir);
        }
        max_count = 0;
        dfsTree(t,0);
        cout << max_count << endl;
    }
       
    return 0;
}