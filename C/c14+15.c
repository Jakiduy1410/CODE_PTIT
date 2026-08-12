#include <stdio.h>

int main()
{
    int a;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int sum = 0;
        scanf("%d", &a);
        while ( a > 0)
        {
            sum += a % 10;
            a /= 10;
        }
        printf("%d\n", sum);
        
    }
    
}