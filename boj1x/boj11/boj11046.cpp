#include <stdio.h>

int n, p[2000005], t[2000005], r, c, m, s, e;

int main() {
    scanf("%d", &n);
    n = 2 * n + 1;
    for (int i = 1; i < n; i += 2) scanf("%d", &t[i]);

    for (int i = 0; i < n; i++) {
        if (i < r) p[i] = r - i < p[2 * c - i] ? r - i : p[2 * c - i];
        while (i - p[i] > 0 && i + p[i] + 1 < n && t[i - p[i] - 1] == t[i + p[i] + 1]) p[i]++;
        if (i + p[i] > r) {
            r = i + p[i];
            c = i;
        }
    }

    scanf("%d", &m);
    while (m--) {
        scanf("%d %d", &s, &e);
        printf("%d\n", p[s + e - 1] >= e - s);
    }
    return 0;
}