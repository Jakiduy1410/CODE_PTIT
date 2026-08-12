#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (b == 0)
    {
        
        return 0;
    }

    long long sum = a + b;
    long long minus = a - b;
    long long multi = (long long )a * b;
    double divine = (double)a / b; // chia ket qua thuc
    long long divine3 = a / b; // chia phan nguyen
    long long divine2 = a % b;

    printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2lf\n", sum, minus, multi,divine3, divine2, divine);
}