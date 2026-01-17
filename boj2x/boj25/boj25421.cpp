#include <stdio.h>

int n, dp[100005][10], res;

int main() {
    scanf("%d", &n);
    for (int i = 1; i < 10; i++) dp[1][i] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < 10; j++) {
            for (int k = j - 2; k <= j + 2; k++) {
                if (1 <= k && k <= 9) {
                    dp[i][j] += dp[i - 1][k];
                    dp[i][j] %= 987654321;
                }
            }
        }
    }
    
    for (int i = 1; i < 10; i++) {
        res += dp[n][i];
        res %= 987654321;
    }
    printf("%d", res);
    return 0;
}