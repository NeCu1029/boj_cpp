#include <stdio.h>

int n, arr[100005], dp1, dp2, res = 1;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    dp1 = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] <= arr[i]) dp1++;
        else dp1 = 1;
        res = res > dp1 ? res : dp1;
    }
    dp2 = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] >= arr[i]) dp2++;
        else dp2 = 1;
        res = res > dp2 ? res : dp2;
    }

    printf("%d", res);
    return 0;
}