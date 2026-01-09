#include <stdio.h>

int a;

int main() {
    scanf("%d", &a);
    printf("%.10lf\n%.10lf", 100.0 / a, 100.0 / (100 - a));
    return 0;
}