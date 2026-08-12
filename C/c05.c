#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    long long a;
    while(t--)
    {
        scanf("%lld\n", &a);
        float sum = 1.0/a;
        printf("%.15llf", sum);
        printf("\n");
    }
}