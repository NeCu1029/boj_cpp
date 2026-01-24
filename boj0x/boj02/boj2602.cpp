#include <stdio.h>
#include <string.h>

int dp[2][105][25], res;
char s[25], t[2][105];

int main() {
    scanf("%s %s %s", s + 1, t[0] + 1, t[1] + 1);
    dp[0][0][0] = 1;
    dp[1][0][0] = 1;

    for (int j = 1; t[0][j]; j++) {
        for (int k = 1; s[k]; k++) {
            for (int i = 0; i <= 1; i++) {
                if (s[k] == t[i][j]) {
                    for (int x = 0; x < j; x++) dp[i][j][k] += dp[!i][x][k - 1];
                }
                if (!s[k + 1]) res += dp[i][j][k];
            }
        }
    }

    printf("%d", res);
    return 0;
}