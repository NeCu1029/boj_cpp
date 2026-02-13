#include <stdio.h>

int l, p, v, r, i;

int main() {
    while (true) {
        i++;
        scanf("%d %d %d", &l, &p, &v);
        if (l == 0) return 0;
        r = v % p < l ? v % p : l;
        printf("Case %d: %d\n", i, v / p * l + r);
    }
}