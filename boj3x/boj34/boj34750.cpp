#include <stdio.h>

int n, s;

int main() {
    scanf("%d", &n);
    s = n / 100;
    if (s < 1000) s *= 5;
    else if (s < 5000) s *= 10;
    else if (s < 10000) s *= 15;
    else s *= 20;
    printf("%d %d", s, n - s);
    return 0;
}