#include <stdio.h>

int n, i;

int main() {
    scanf("%d", &n);
    while (((i + 5) / 2) * ((i + 4) / 2) < n) i++;
    printf("%d", ((i + 3) / 2 + (i + 2) / 2) * 2);
    return 0;
}