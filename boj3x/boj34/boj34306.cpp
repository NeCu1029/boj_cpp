#include <stdio.h>

int w, n;

int main() {
    scanf("%d %d", &w, &n);
    printf("%d", 5280 * w / n);
    return 0;
}