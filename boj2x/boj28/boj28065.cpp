#include <stdio.h>

int n, t = 1;

int main() {
    scanf("%d", &n);
    printf("1 ");
    for (int i = 1; i < n; i++) {
        if (i % 2) t += (n - i);
        else t -= (n - i);
        printf("%d ", t);
    }
    return 0;
}