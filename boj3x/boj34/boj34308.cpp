#include <stdio.h>

int n, k, a;

int main() {
    scanf("%d %d", &n, &k);
    while (k--) {
        scanf("%d", &a);
        if (n - a < a - 1) printf("%d ", n);
        else printf("1 ");
    }
    return 0;
}