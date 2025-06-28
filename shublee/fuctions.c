#include <stdio.h>

double power(double x, int n);

int main() {
    double base;
    int exponent;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent (non-negative): ");
    scanf("%d", &exponent);

    printf("%.2lf ^ %d = %.2lf\n", base, exponent, power(base, exponent));

    return 0;
}

double power(double x, int n) {
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return power(x * x, n / 2);
    else
        return x * power(x, n - 1);
}