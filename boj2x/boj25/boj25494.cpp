#include <stdio.h>

int t, a, b, c, res;

int main() {
    scanf("%d", &t);
    while (t--) {
        res = 0;
        scanf("%d %d %d", &a, &b, &c);
        for (int x = 1; x <= a; x++) {
            for (int y = 1; y <= b; y++) {
                for (int z = 1; z <= c; z++) {
                    res += x % y == y % z && y % z == z % x;
                }
            }
        }
        printf("%d\n", res);
    }
    return 0;
}