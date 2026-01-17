#include <stdio.h>

int n, arr[5005], dp[5005][5005];

int f(int l, int r) {
    if (l >= r) return 0;
    if (dp[l][r] >= 0) return dp[l][r];

    if (arr[l] == arr[r]) return dp[l][r] = f(l + 1, r - 1);
    int a = f(l + 1, r);
    int b = f(l, r - 1);
    return dp[l][r] = (a < b ? a : b) + 1;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) dp[i][j] = -1;
    }
    printf("%d", f(0, n - 1));
    return 0;
}