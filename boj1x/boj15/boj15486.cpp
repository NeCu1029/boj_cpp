#include <stdio.h>
#include <algorithm>

using namespace std;

int n, t[1500005], p[1500005], dp[1500005];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d %d", &t[i], &p[i]);
    for (int i = n; i > 0; i--) {
        dp[i] = dp[i + 1];
        if (i + t[i] <= n + 1) dp[i] = max(dp[i], dp[i + t[i]] + p[i]);
    }
    printf("%d", dp[1]);
    return 0;
}