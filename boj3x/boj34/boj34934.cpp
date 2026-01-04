#include <stdio.h>

int n, y;
char s[20];

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%s %d", s, &y);
        if (y == 2026) {
            printf("%s", s);
            return 0;
        }
    }
}