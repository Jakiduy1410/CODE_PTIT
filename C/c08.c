#include <stdio.h>

int main()
{
   int a;
   scanf("%d", &a);
   float degree = (a * (9.0 / 5.0)) + 32.0;
   printf("%.2f", degree);
}