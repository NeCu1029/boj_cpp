#include <stdio.h>

int a, k, dp[1000005];

int main() {
    scanf("%d %d", &a, &k);
    for (int i = a + 1; i <= k; i++) {
        if (i % 2) dp[i] = dp[i - 1] + 1;
        else if (i / 2 < a) dp[i] = dp[i - 1] + 1;
        else dp[i] = (dp[i - 1] < dp[i / 2] ? dp[i - 1] : dp[i / 2]) + 1;
    }
    printf("%d", dp[k]);
    return 0;
}