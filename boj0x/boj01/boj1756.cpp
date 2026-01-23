#include <stdio.h>

int d, n, a[300005], k;

int main() {
    scanf("%d %d", &d, &n);
    for (int i = 1; i <= d; i++) {
        scanf("%d", &a[i]);
        if (i > 1 && a[i - 1] < a[i]) a[i] = a[i - 1];
    }

    while (n--) {
        scanf("%d", &k);
        while (d && a[d] < k) d--;
        d--;
        if (d < 0) break;
    }
    printf("%d", d + 1);
    return 0;
}