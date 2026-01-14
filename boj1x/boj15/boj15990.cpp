#include <stdio.h>
#define MOD 1000000009

int t, n, dp[100005][4], ans;

int main() {
    dp[1][1] = 1; dp[1][2] = 0; dp[1][3] = 0;
    dp[2][1] = 0; dp[2][2] = 1; dp[2][3] = 0;
    dp[3][1] = 1; dp[3][2] = 1; dp[3][3] = 1;
    for (int i = 4; i <= 100000; i++) {
        for (int j = 1; j <= 3; j++) {
            for (int k = 1; k <= 3; k++) {
                if (j == k) continue;
                dp[i][j] += dp[i - j][k];
                dp[i][j] %= MOD;
            }
        }
    }

    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        ans = 0;
        for (int i = 1; i <= 3; i++) {
            ans += dp[n][i];
            ans %= MOD;
        }
        printf("%d\n", ans);
    }
    return 0;
}