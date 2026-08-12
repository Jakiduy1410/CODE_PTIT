#include <stdio.h>
#include <string.h>
char a[10000000];
int array(char a[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] < a[i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {

        scanf("%s", a);
        if (array(a) == 1)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}