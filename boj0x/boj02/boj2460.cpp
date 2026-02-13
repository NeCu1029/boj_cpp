#include <stdio.h>

int a, b, n, res;

int main() {
    for (int i = 0; i < 10; i++) {
        scanf("%d %d", &a, &b);
        n -= a;
        n += b;
        res = res > n ? res : n;
    }
    printf("%d", res);
    return 0;
}