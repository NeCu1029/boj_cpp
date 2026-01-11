#include <stdio.h>

int n, d, a[35], s;

int main() {
    scanf("%d %d", &n, &d);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        s += a[i];
    }
    for (int i = 0; i < n; i++) printf("%d\n", d / s * a[i]);
    return 0;
}