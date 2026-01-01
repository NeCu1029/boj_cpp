#include <stdio.h>

int n, x1, x2, res;

int main() {
    scanf("%d", &n);
    scanf("%d", &x2);
    res += x2 / 2 + 1;

    for (int i = 0; i < n - 1; i++) {
        x1 = x2;
        scanf("%d", &x2);
        if (x2 - x1 == 1) {
            printf("-1");
            return 0;
        }
        res += (x2 - x1 + 1) / 2;
    }

    printf("%d", res);
    return 0;
}