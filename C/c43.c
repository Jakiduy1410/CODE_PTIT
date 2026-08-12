#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d", &n , &m);

    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        int j = i + 1;
        while (j <= m)
        {
            printf("%d", j);
            j++;
        }
        if (i < m )
        {
            int j = i - 1;
            while (j > 0)
            {
                printf("%d", j);
                j--;
            }
            
        }
        else
        {
            int j = m - 1;
            while (j > 0)
            {
                printf("%d", j);
                j--;
            }
            
        }
        
        
        printf("\n");
    }
    
}