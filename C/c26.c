#include<stdio.h>
int gt(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}
int strong(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += gt(n % 10);
        n /= 10;
    }
    return sum;
}
int main()
{
    int a;
    scanf("%d", &a);
    int x = strong(a);
    if (x == a)
    {
        printf("1");
    }
    else printf("0");
}