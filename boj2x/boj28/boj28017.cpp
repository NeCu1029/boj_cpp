#include <stdio.h>

int n, m, t[505][505], dp[505][505], cur, res = 1 << 30;

int f(int x, int y) {
    if (x == n - 1) return t[x][y];
    if (dp[x][y]) return dp[x][y];

    int cur, res = 1 << 30;
    for (int i = 0; i < m; i++) {
        if (i == y) continue;
        cur = f(x + 1, i);
        res = res < cur ? res : cur;
    }
    return dp[x][y] = res + t[x][y];
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) scanf("%d", &t[i][j]);
    }
    
    for (int i = 0; i < m; i++) {
        cur = f(0, i);
        res = res < cur ? res : cur;
    }
    printf("%d", res);
    return 0;
}