#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = n;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < count-1; i++) printf("~"); 
        for (int i = 0; i < n; i++) printf("*") ;
        count--;
        printf("\n");
    }
    
}