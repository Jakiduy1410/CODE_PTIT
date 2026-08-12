#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for(int k = 0 ; k < count ; k++) printf("~");
        for(int j = 0 ; j < m ; j++)
        {
            if ( i == 0 || i == n - 1 || j == 0 || j == m - 1 ) printf("*");
            else printf(".");
        }
       
        count++;
        printf("\n");
    }
    
}