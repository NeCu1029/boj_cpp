#include <stdio.h>

int n, p[200005], r, c, res;
char s[100005], t[200005];

int main() {
    scanf("%s", s);
    t[0] = '#';
    n = 1;
    for (int i = 0; s[i]; i++) {
        t[2 * i + 1] = s[i];
        t[2 * i + 2] = '#';
        n += 2;
    }

    for (int i = 0; i < n; i++) {
        if (i < r) p[i] = r - i < p[2 * c - i] ? r - i : p[2 * c - i];
        while (i - p[i] > 0 && i + p[i] + 1 < n && t[i - p[i] - 1] == t[i + p[i] + 1]) p[i]++;
        if (i + p[i] > r) {
            r = i + p[i];
            c = i;
        }
        res = res > p[i] ? res : p[i];
    }

    printf("%d", res);
    return 0;
}