#include <stdio.h>

int h, w, n, arr[1005][1005], dp[1005][1005], x, y;

int main() {
    scanf("%d %d %d", &h, &w, &n);
    dp[0][0] = n - 1;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            scanf("%d", &arr[i][j]);
            if (dp[i][j] % 2) {
                dp[i][j + 1] += dp[i][j] / 2 + arr[i][j];
                dp[i + 1][j] += dp[i][j] / 2 + !arr[i][j];
            }
            else {
                dp[i][j + 1] += dp[i][j] / 2;
                dp[i + 1][j] += dp[i][j] / 2;
            }
        }
    }

    while (x < h && y < w) {
        if ((arr[x][y] + dp[x][y]) % 2) y++;
        else x++;
    }
    printf("%d %d", x + 1, y + 1);
    return 0;
}