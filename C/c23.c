#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    scanf("%s", a);
    int len = strlen(a);
    if(a[len-1] != '0') printf("%c", a[len-1]);
    for (int i = 1; i < len-1; i++)
    {
        printf("%c" ,a[i]);
    }
    printf("%c", a[0]);
}