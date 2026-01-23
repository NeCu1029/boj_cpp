#include <stdio.h>

int n, l, r, x, a[20], mi, ma, s, res;

int main() {
    scanf("%d %d %d %d", &n, &l, &r, &x);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 1; i < (1 << n); i++) {
        mi = 1000005; ma = 0; s = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                mi = mi < a[j] ? mi : a[j];
                ma = ma > a[j] ? ma : a[j];
                s += a[j];
            }
        }
        if (l <= s && s <= r && ma - mi >= x) res++;
    }

    printf("%d", res);
    return 0;
}