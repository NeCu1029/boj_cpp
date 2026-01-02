#include <stdio.h>

int n, arr[105];
long long int dp[105][25];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    dp[0][arr[0]] = 1;

    for (int i = 1; i < n - 1; i++) {
        for (int j = 0; j <= 20; j++) {
            if (j + arr[i] <= 20) dp[i][j] += dp[i - 1][j + arr[i]];
            if (j - arr[i] >= 0) dp[i][j] += dp[i - 1][j - arr[i]];
        }
    }

    printf("%lld", dp[n - 2][arr[n - 1]]);
    return 0;
}