#include <stdio.h>

int n, k, a;

int main() {
    scanf("%d %d", &n, &k);
    a = (k + 1) / 2 * 2;
    if (n >= a) printf("YES");
    else printf("NO");
    return 0;
}