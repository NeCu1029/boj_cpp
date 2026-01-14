#include <stdio.h>

int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
int n, arr[505][505], dp[505][505], ans;

int dfs(int x, int y) {
    if (dp[x][y]) return dp[x][y];

    int nx, ny, res = 1, cur;
    for (int i = 0; i < 4; i++) {
        nx = x + dx[i], ny = y + dy[i];
        if (nx < 0 || nx >= n) continue;
        if (ny < 0 || ny >= n) continue;
        if (arr[x][y] >= arr[nx][ny]) continue;
        cur = dfs(nx, ny) + 1;
        res = res > cur ? res : cur;
    }

    return dp[x][y] = res;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) scanf("%d", &arr[i][j]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            dfs(i, j);
            ans = ans > dp[i][j] ? ans : dp[i][j];
        }
    }
    printf("%d", ans);
    return 0;
}