#include <stdio.h>

int a, b, c, s;

int main() {
    scanf("%d %d %d", &a, &b, &c);
    s = a + b + c;
    printf("%d", (s / 3 - a) * 2 + (s / 3 - b));
    return 0;
}