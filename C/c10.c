#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == 0 && b == 0)
    {
        printf("Vo so nghiem");
        return 0;
    }
    else if (a==0 )
    {
        printf("Vo nghiem");
        return 0;
    }
    
    float res = (float)-b / a;
    printf("%.2f", res);
}