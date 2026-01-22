#include <stdio.h>

int n, a = 1, b = 19999;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", a * b);
        if (i & 1) a++;
        else b--;
    }
    if (n < 20000) printf("%d", a * b);
    else printf("100000000");
    return 0;
}