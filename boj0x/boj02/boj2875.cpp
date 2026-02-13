#include <stdio.h>

int n, m, k, c;

int main() {
    scanf("%d %d %d", &n, &m, &k);
    if (n % 2) {
        c++;
        n--;
    }

    if (n > 2 * m) {
        c += n - 2 * m;
        n = 2 * m;
    } else if (n < 2 * m) {
        c += m - n / 2;
        m = n / 2;
    }

    if (k > c) printf("%d", m - (k - c - 1) / 3 - 1);
    else printf("%d", m);
    return 0;
}