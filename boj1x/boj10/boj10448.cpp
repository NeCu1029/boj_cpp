#include <stdio.h>

int t, n, s[105], dp[1005][5];

int main() {
    for (int i = 1; i <= 100; i++) s[i] = s[i - 1] + i;
    dp[0][0] = 1;
    for (int i = 1; i <= 1000; i++) {
        for (int j = 1; j <= 3; j++) {
            for (int k = 1; s[k] <= i; k++) dp[i][j] |= dp[i - s[k]][j - 1];
        }
    }

    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        printf("%d\n", dp[n][3]);
    }
    return 0;
}