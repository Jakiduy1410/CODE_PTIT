#include<stdio.h>
int res(int n)
{
   long long sum = 1;
    while (n > 0)
    {
        sum *= n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int a;
    scanf("%d", &a);
    long long x = res(a);
    printf("%d", x);
}