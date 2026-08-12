#include <stdio.h>

int pt(int n)
{

    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }
    if (n > 1)
        printf("%d", n);
}

int main()
{
    int t;
    scanf("%d", &t);
    int a;
    while (t--)
    {

        scanf("%d", &a);
        pt(a);
    }
}