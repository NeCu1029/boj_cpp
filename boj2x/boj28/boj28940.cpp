#include <stdio.h>

int w, h, n, a, b, x;

int main() {
    scanf("%d %d %d %d %d", &w, &h, &n, &a, &b);
    x = (w / a) * (h / b);
    if (x) printf("%d", (n - 1) / x + 1);
    else printf("-1");
    return 0;
}