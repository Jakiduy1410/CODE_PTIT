#include <stdio.h>
#include <math.h>

int Cp(int n)
{
    int a = sqrt(n);
    if (a * a == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    int t;
    scanf("%d", &t);
    while (t--)
    {

        scanf("%d", &n);
        if (Cp(n))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}