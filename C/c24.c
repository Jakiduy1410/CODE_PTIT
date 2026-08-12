#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000000];
    scanf("%s", a);
    int len = strlen(a);
    
    printf("%d", len);
}