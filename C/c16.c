#include<stdio.h>

int main()
{
    int a;
    int t;
    scanf("%d", &t);
    while(t--)
    {

        scanf("%d", &a);
        int cuoi = a % 10; 
        int dau = 0;
        while (a > 0)
        {
            dau = a % 10;
            a /= 10;
        }
        
        if(dau == cuoi)
        {
            printf("YES\n");
            
        }
        else
        {
            printf("NO\n");
            
        }
        
    }
}