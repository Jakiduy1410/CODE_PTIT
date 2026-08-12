#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    long long a;
    while(t--)
    {
        scanf("%lld\n", &a);
        long long sum = a*a;
        printf("%lld\n", sum);
    }
}