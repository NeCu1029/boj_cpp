#include <stdio.h>

int d, e, q;
char c;

int main() {
    scanf("%d", &d);
    scanf("%d", &e);
    while (e--) {
        scanf(" %c %d", &c, &q);
        if (c == '+') d += q;
        else d -= q;
    }
    printf("%d", d);
    return 0;
}