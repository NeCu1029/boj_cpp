#include <stdio.h>
#include <string.h>

int n, x, dp[5005];
char s[5005];

int main() {
    scanf("%s", s + 1);
    n = strlen(s + 1);
    if (s[1] == '0') {
        printf("0");
        return 0;
    }

    dp[0] = 1; dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (s[i] != '0') dp[i] += dp[i - 1];
        x = (int) (s[i - 1] - '0') * 10 + (int) (s[i] - '0');
        if (10 <= x && x <= 26) dp[i] += dp[i - 2];
        dp[i] %= 1000000;
    }
    printf("%d", dp[n]);
    return 0;
}