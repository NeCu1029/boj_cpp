#include <stdio.h>

int n, arr[55], x, y, a, b;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    if (n == 1) {
        printf("A");
        return 0;
    } else if (n == 2 && arr[0] == arr[1]) {
        printf("%d", arr[0]);
        return 0;
    } else if (n == 2) {
        printf("A");
        return 0;
    }

    x = arr[1] - arr[0];
    y = arr[2] - arr[1];
    if (x == 0) {
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[0]) {
                printf("B");
                return 0;
            }
        }
        printf("%d", arr[0]);
        return 0;
    }
    if (y % x) {
        printf("B");
        return 0;
    }

    a = y / x;
    b = arr[1] - arr[0] * a;
    for (int i = 1; i < n; i++) {
        if (a * arr[i - 1] + b != arr[i]) {
            printf("B");
            return 0;
        }
    }
    printf("%d", a * arr[n - 1] + b);
    return 0;
}