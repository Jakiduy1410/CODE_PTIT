#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int year = 0, month = 0, day = 0;
    if (a >= 365)
    {

        year = a / 365;
        month = (a - 365 * year) / 7;
        day = (a - 365 * year - month * 7);
    }
    else
    {
        month = a / 7;
        day = (a - month * 7);
    }

    printf("%d %d %d", year, month, day);
}