#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int dp[4005][4005], res;
char s[4005], t[4005];

int main() {
    scanf("%s", s + 1);
    scanf("%s", t + 1);

    for (int i = 1; s[i]; i++) {
        for (int j = 1; t[j]; j++) {
            if (s[i] == t[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
            res = max(res, dp[i][j]);
        }
    }
    printf("%d", res);
    return 0;
}