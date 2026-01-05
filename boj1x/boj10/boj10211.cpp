#include <stdio.h>

int t, n, res, arr[1005];

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%d", &arr[i]);
            arr[i] += arr[i - 1];
        }

        res = -(1 << 30);
        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j++) {
                res = res > arr[j] - arr[i - 1] ? res : arr[j] - arr[i - 1];
            }
        }
        printf("%d\n", res);
    }
    return 0;
}