#include <stdio.h>

int n, m, k, vis[105], dp[105][105];

int min(int a, int b) {
    return a < b ? a : b;
}

int f(int d, int c) {
    if (d > n) return 0;
    if (vis[d]) return dp[d][c] = f(d + 1, c);
    if (dp[d][c] >= 0) return dp[d][c];

    int res = 1 << 30;
    res = min(res, f(d + 1, c) + 10000);
    res = min(res, f(d + 3, c + 1) + 25000);
    res = min(res, f(d + 5, c + 2) + 37000);
    if (c >= 3) res = min(res, f(d + 1, c - 3));

    return dp[d][c] = res;
}

int main() {
    scanf("%d %d", &n, &m);
    vis[0] = 1;
    while (m--) {
        scanf("%d", &k);
        vis[k] = 1;
    }

    for (int i = 0; i <= n + 1; i++) {
        for (int j = 0; j <= n + 1; j++) {
            dp[i][j] = -1;
        }
    }
    printf("%d\n", f(0, 0));
    return 0;
}