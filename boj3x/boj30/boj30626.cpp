#include <stdio.h>

int n, a, b, l, r, arr[365], res;

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &a, &b);
        if (b == 180) {
            printf("360");
            return 0;
        }
        l = (180 + a - b) % 360;
        r = (180 + a + b) % 360;
        arr[l]++;
        arr[r + 1]--;
        if (l > r) {
            arr[360]--;
            arr[0]++;
        }
    }

    for (int i = 0; i < 360; i++) {
        if (arr[i]) res++;
        arr[i + 1] += arr[i];
    }
    printf("%d", res);
    return 0;
}