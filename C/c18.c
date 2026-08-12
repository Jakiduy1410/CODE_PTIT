#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int a, b;
    int t;
    scanf("%d", &t);
    while (t--)
    {

        scanf("%d %d", &a, &b);
        if (a < b)
        {
            int temp1 = a;
            a = b;
            b= temp1;
        }
        
        int UCLN = gcd(a,b);

       
        printf("%d\n", UCLN);
    }
}