#include<stdio.h>
int main()
{
    int a;
    long long multi;
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++)
    {
        multi = a*i;
        printf("%lld " ,multi);
    }
    
}