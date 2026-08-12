#include<stdio.h>

int main()
{
    int a, sum = 0;
    scanf("%d", &a);
    for (int i = 1; i < a; i++)
    {
        if(a % i == 0)
        {
          sum += i;
        }
    }
    if (sum == a)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    
}