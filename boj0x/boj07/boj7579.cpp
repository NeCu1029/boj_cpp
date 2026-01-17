#include <stdio.h>
#include <algorithm>

using namespace std;

int n, k, s, m[105], c[105], dp[105][10005];

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++) scanf("%d", &m[i]);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &c[i]);
        s += c[i];
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= s; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j >= c[i]) dp[i][j] = max(dp[i][j], dp[i - 1][j - c[i]] + m[i]);
        }
    }

    for (int i = 0; i <= s; i++) {
        if (dp[n][i] >= k) {
            printf("%d", i);
            return 0;
        }
    }
}