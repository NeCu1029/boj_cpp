#include <stdio.h>

int n, p[800005], r, c;
char s[400005], t[800005];

int main() {
    scanf("%d", &n);
    scanf("%s", s);
    n = 2 * n + 1;
    t[0] = '#';
    for (int i = 0; s[i]; i++) {
        t[2 * i + 1] = s[i];
        t[2 * i + 2] = '#';
    }

    for (int i = 0; i < n; i++) {
        if (i < r) p[i] = r - i < p[2 * c - i] ? r - i : p[2 * c - i];
        while (i - p[i] > 0 && i + p[i] + 1 < n && t[i - p[i] - 1] == t[i + p[i] + 1]) p[i]++;
        if (i + p[i] > r) {
            r = i + p[i];
            c = i;
        }
    }

    for (int i = n / 2; i < n; i++) {
        if (i + p[i] + 1 == n) {
            printf("%d", i - n / 2);
            return 0;
        }
    }
}