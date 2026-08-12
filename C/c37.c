#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int count = a;

    for (int i = 0; i < a; i++)
    {
        for(int k = 0 ; k < count-1 ; k++) printf("~");
        for(int j = 0 ; j < a ; j++)
        {
            if(i == 0 || i == a - 1 || j == 0 || j == a - 1) printf("*");
            else printf(".");
        }
        count--;
        printf("\n");
    }
    
}