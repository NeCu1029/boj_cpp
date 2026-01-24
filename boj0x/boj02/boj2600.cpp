#include <stdio.h>

int b1, b2, b3, dp[505][505], k1, k2;

int main() {
    scanf("%d %d %d", &b1, &b2, &b3);
    for (int i = 0; i <= 500; i++) {
        for (int j = 0; j <= 500; j++) {
            dp[i][j] = 1;
            if (i >= b1) dp[i][j] &= !dp[i - b1][j];
            if (i >= b2) dp[i][j] &= !dp[i - b2][j];
            if (i >= b3) dp[i][j] &= !dp[i - b3][j];
            if (j >= b1) dp[i][j] &= !dp[i][j - b1];
            if (j >= b2) dp[i][j] &= !dp[i][j - b2];
            if (j >= b3) dp[i][j] &= !dp[i][j - b3];
        }
    }

    for (int i = 0; i < 5; i++) {
        scanf("%d %d", &k1, &k2);
        if (dp[k1][k2]) printf("B\n");
        else printf("A\n");
    }
    return 0;
}