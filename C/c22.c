#include<stdio.h>
int sum(int a, int b)
{
    long long x = 0;
    for (int i = a; i <= b; i++)
    {
        x += i;
    }
    printf("%d",x);
    return x;
}
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    sum(a,b);
}