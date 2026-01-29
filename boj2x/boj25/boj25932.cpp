#include <stdio.h>

int n, x, z, m;

int main() {
    scanf("%d", &n);
    while (n--) {
        z = 0; m = 0;
        for (int i = 0; i < 10; i++) {
            scanf("%d", &x);
            printf("%d ", x);
            if (x == 17) z = 1;
            if (x == 18) m = 1;
        }
        if (z && m) printf("\nboth\n");
        else if (z) printf("\nzack\n");
        else if (m) printf("\nmack\n");
        else printf("\nnone\n");
        if (n) printf("\n");
    }
    return 0;
}