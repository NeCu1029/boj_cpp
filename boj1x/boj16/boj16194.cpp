#include <stdio.h>
#include <algorithm>

using namespace std;

int n, p[1005], dp[1005];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &p[i]);
        dp[i] = 2147483647;
        for (int j = 1; j <= i; j++) dp[i] = min(dp[i], dp[i - j]  + p[j]);
    }
    printf("%d", dp[n]);
    return 0;
}