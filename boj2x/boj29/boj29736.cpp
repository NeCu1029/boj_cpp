#include <stdio.h>

int a, b, k, x, res;

int main() {
    scanf("%d %d %d %d", &a, &b, &k, &x);
    for (int i = a; i <= b; i++) {
        if (-x <= i - k && i - k <= x) res++;
    }
    if (res) printf("%d", res);
    else printf("IMPOSSIBLE");
    return 0;
}