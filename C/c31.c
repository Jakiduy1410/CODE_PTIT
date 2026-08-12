#include<stdio.h>

int find(int n)
{
    int dem = 0;
    for (int i = 1; i*i <= n; i++)
    {
        if (n % i == 0 )
        {
            if(i % 2 == 0) dem++;
            if((n/i) % 2 == 0 && n/i != i) dem++;
        }
        
    }
    printf("%d\n", dem);
    return dem;
}
int main()
{
    int a;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &a);
        find(a);
        
    }
    
}