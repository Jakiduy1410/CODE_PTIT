#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int cuoi = a % 10; 
    int dau = 0;
    while (a > 0){
        dau = a % 10;
        a /= 10;
    }
    
    printf("%d %d", dau , cuoi);
}