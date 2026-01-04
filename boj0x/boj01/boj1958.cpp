#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

char a[105], b[105], c[105];
int l, m, n, dp[105][105][105];

int main() {
    scanf("%s %s %s", a + 1, b + 1, c + 1);
    l = strlen(a + 1); m = strlen(b + 1); n = strlen(c + 1);
    for (int i = 1; i <= l; i++) {
        for (int j = 1; j <= m; j++) {
            for (int k = 1; k <= n; k++) {
                if (a[i] == b[j] && b[j] == c[k]) dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                else dp[i][j][k] = max(dp[i - 1][j][k], max(dp[i][j - 1][k], dp[i][j][k - 1]));
            }
        }
    }
    printf("%d", dp[l][m][n]);
    return 0;
}