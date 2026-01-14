#include <stdio.h>

int t, n;
long long int dp[10000][4];

int main() {
    dp[1][1] = 1; dp[1][2] = 0; dp[1][3] = 0;
    dp[2][1] = 1; dp[2][2] = 1; dp[2][3] = 0;
    dp[3][1] = 1; dp[3][2] = 1; dp[3][3] = 1;
    for (int i = 4; i <= 10000; i++) {
        dp[i][1] = dp[i - 1][1];
        dp[i][2] = dp[i - 2][1] + dp[i - 2][2];
        dp[i][3] = dp[i - 3][1] + dp[i - 3][2] + dp[i - 3][3];
    }

    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        printf("%lld\n", dp[n][1] + dp[n][2] + dp[n][3]);
    }
    return 0;
}