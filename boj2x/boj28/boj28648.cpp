#include <stdio.h>

int n, t, l, res = 1000;

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &t, &l);
        res = res < t + l ? res : t + l;
    }
    printf("%d", res);
    return 0;
}