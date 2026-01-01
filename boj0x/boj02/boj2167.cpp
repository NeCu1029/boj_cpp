#include <stdio.h>
#include <cassert>

long long int arr[301][301], dp[301][301];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) scanf("%d", &arr[i][j]);
    }
    for (int i = 1; i <= n; i++) {
        dp[i][1] = dp[i - 1][1] + arr[i][1];
        for (int j = 2; j <= m; j++) dp[i][j] = dp[i][j - 1] + dp[i - 1][j] + arr[i][j] - dp[i - 1][j - 1];
    }

    int k;
    scanf("%d", &k);
    while (k--) {
        int i, j, x, y;
        scanf("%d %d %d %d", &i, &j, &x, &y);
        assert(dp[x][y] - dp[x][j - 1] - dp[i - 1][y] + dp[i - 1][j - 1] <= ((1ll << 31) - 1ll));
        printf("%lld\n", dp[x][y] - dp[x][j - 1] - dp[i - 1][y] + dp[i - 1][j - 1]);
    }
    return 0;
}