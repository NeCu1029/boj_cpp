#include <stdio.h>

int n, res, h, d[1000005];

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &h);
        if (d[h + 1]) d[h + 1]--;
        else res++;
        d[h]++;
    }
    printf("%d", res);
    return 0;
}