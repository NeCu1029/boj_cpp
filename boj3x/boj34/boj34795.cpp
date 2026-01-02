#include <stdio.h>

int m, d;

int main() {
    scanf("%d %d", &m, &d);
    printf("%d", (d - 1) / m + 1);
    return 0;
}