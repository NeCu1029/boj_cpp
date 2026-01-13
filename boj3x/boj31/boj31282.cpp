#include <stdio.h>

int n, m, k;

int main() {
    scanf("%d %d %d", &n, &m, &k);
    printf("%d", (n - 1) / (k - m) + 1);
    return 0;
}