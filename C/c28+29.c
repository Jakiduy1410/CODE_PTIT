#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000000];
    int t;
        scanf("%d", &t);
    while (t--)
    {

        scanf("%s", &a);
        int chan = 0, le = 0;
        int len = strlen(a);
        for (int i = 0; i < len; i++)
        {
            if (a[i] % 2 == 0)
            {
                chan++;
            }
            else
                le++;
        }
        printf("%d %d\n", le, chan);
    }
}