#include <stdio.h>

int m[15], n, b, s, res;
double l;

int main() {
    for (int i = 0; i < 11; i++) scanf("%d", &m[i]);
    scanf("%d", &n);

    while (n--) {
        scanf("%d %lf %d", &b, &l, &s);
        if (l >= 2.0 && s >= 17) res += m[b];
    }
    printf("%d", res);
    return 0;
}