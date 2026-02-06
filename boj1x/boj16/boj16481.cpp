#include <stdio.h>

double r1, r2, r3;

int main() {
    scanf("%lf %lf %lf", &r1, &r2, &r3);
    printf("%.15lf", 1 / (1 / r1 + 1 / r2 + 1 / r3));
    return 0;
}