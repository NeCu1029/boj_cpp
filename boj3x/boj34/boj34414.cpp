#include <stdio.h>

int n, x;

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        if (x < 48) {
            printf("False");
            return 0;
        }
    }
    printf("True");
    return 0;
}