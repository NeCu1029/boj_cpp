#include <stdio.h>

int n, a[1000005], r[1000005], b[1000005], rw, bw;

int max(int x, int y) {
    return x > y ? x : y;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);

    for (int i = 1; i <= n - 1; i++) r[i] = max(r[i - 1], a[i]);
    for (int i = n - 1; i >= 1; i--) b[i] = max(b[i + 1], a[i + 1]);
    for (int i = 1; i <= n - 1; i++) {
        if (r[i] > b[i]) rw++;
        else if (r[i] < b[i]) bw++;
    }

    if (rw > bw) printf("R");
    else if (rw < bw) printf("B");
    else printf("X");

    return 0;
}