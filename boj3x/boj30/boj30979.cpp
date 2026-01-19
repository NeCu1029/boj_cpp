#include <stdio.h>

int t, n, f, s;

int main() {
    scanf("%d %d", &t, &n);
    while (n--) {
        scanf("%d", &f);
        s += f;
    }
    if (t <= s) printf("Padaeng_i Happy");
    else printf("Padaeng_i Cry");
    return 0;
}