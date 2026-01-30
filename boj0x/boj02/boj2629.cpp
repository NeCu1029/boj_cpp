#include <stdio.h>

int n, a, m, x;
bool dp[35][30005];

int main() {
    scanf("%d", &n);
    dp[0][15000] = true;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a);
        for (int j = 0; j <= 30000; j++) {
            dp[i][j] |= dp[i - 1][j];
            if (j - a >= 0) dp[i][j] |= dp[i - 1][j - a];
            if (j + a <= 30000) dp[i][j] |= dp[i - 1][j + a];
        }
    }

    scanf("%d", &m);
    while (m--) {
        scanf("%d", &x);
        if (x > 15000) printf("N ");
        else if (dp[n][15000 - x] || dp[n][15000 + x]) printf("Y ");
        else printf("N ");
    }
    return 0;
}