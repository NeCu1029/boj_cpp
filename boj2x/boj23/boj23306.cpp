#include <stdio.h>

int n, a, b;

int main() {
    scanf("%d", &n);
    printf("? %d\n", n);
    fflush(stdout);
    scanf("%d", &a);
    printf("? 1\n");
    fflush(stdout);
    scanf("%d", &b);
    printf("! %d", a - b);
    fflush(stdout);
    return 0;
}