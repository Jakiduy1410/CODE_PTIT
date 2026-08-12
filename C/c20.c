#include<stdio.h>
#include<math.h>

int main()
{
    int m,n;
    scanf("%d %d", &n , &m);

    if (n > m)
    {
        int temp = n; 
        n = m;
        m = temp;
    }
    
    int count = floor(sqrt(m))-ceil(sqrt(n))+1;
  
    printf("%d\n", count);
    
     for (int i = ceil(sqrt(n)); i <= floor(sqrt(m)); i++)
    {
        
            
            printf("%d\n", i*i);
        
        
    }

}