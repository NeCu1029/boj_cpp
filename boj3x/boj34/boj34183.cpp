#include <stdio.h>

int n, m, a, b;

int main() {
    scanf("%d %d %d %d", &n, &m, &a, &b);
    if (3 * n <= m) printf("0");
    else printf("%d", a * (3 * n - m) + b);
    return 0;
}