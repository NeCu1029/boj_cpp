#include <stdio.h>

int a, b, c, d, e;

int main() {
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a < 0) printf("%d", -a * c + d + b * e);
    else printf("%d", (b - a) * e);
    return 0;
}