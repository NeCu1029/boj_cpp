#include <stdio.h>

int n, k, s;

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &k);
        s += (k + 1) / 2;
    }
    printf("%d", s);
    return 0;
}