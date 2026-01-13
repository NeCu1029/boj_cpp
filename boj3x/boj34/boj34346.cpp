#include <stdio.h>

int n;

int main() {
    scanf("%d", &n);
    printf("%d", 2 - n % 2);
    return 0;
}