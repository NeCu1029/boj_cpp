#include <stdio.h>

int t, n;
long long int dp[100][10];

int main() {
    for (int i = 1; i <= 90; i++) {
        dp[i][0] = 1;
        for (int j = 1; j < 10; j++) dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
    }

    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        printf("%lld\n", dp[n + 1][9]);
    }
    return 0;
}