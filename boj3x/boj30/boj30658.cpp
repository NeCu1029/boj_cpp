#include <stdio.h>

int n, arr[105];

int main() {
    while (1) {
        scanf("%d", &n);
        if (n == 0) return 0;
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        for (int i = n - 1; i >= 0; i--) printf("%d\n", arr[i]);
        printf("0\n");
    }
}