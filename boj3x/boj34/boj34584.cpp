#include <stdio.h>

int x, d;

int main() {
    scanf("%d %d", &x, &d);
    if (2 * x > d) printf("take it");
    else printf("double it");
    return 0;
}