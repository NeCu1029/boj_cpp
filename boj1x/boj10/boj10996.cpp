#include <stdio.h>

int n;

int main() {
    scanf("%d", &n);
    if (n == 1) printf("*");
    else {
        for (int i = 0; i < 2 * n; i++) {
            for (int j = 0; j < n; j++) {
                if ((i + j) % 2) printf(" ");
                else printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}