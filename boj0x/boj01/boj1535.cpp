#include <stdio.h>

int n, a[25], b[25], h, v, res;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    for (int i = 0; i < (1 << n); i++) {
        h = 100; v = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                h -= a[j];
                v += b[j];
            }
        }
        if (h > 0) res = res > v ? res : v;
    }

    printf("%d", res);
    return 0;
}