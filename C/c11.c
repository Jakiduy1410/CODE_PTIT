#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int dela = b * b - 4 * a * c;
    if (dela > 0)
    {
        float x1 = (float)(-b + sqrt(dela)) / (2.0 * a);
        float x2 = (float)(-b - sqrt(dela)) / (2.0 * a);
        printf("%.2f %.2f", x1, x2);
        return 0;
    }
    else if (dela == 0)
    {
        float x3 = (float)-b / (2.0 * a);
        printf("%.2f", x3);
        return 0;
    }
    else
    {
        printf("NO");
    }
}