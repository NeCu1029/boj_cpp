#include <stdio.h>

int a, b, c, d;

int main() {
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a * b > c * d) printf("M");
    else if (a * b < c * d) printf("P");
    else printf("E");
    return 0;
}