#include <stdio.h>

int n, w, res;

int main() {
    scanf("%d %d", &n, &w);
    res += 10 * n;
    res += 20 * (n >= 3);
    res += 50 * (n >= 5);
    res -= 15 * (w > 1000);
    printf("%d", res > 0 ? res : 0);
    return 0;
}