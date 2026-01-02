#include <stdio.h>
#include <algorithm>

using namespace std;

int n, a[1005], dp[1005];

int recur(int x) {
    if (x > n) return 1 << 30;
    if (x == n) return 0;
    if (dp[x]) return dp[x];

    int res = 1 << 30;
    for (int i = 1; i <= a[x]; i++) res = min(res, recur(x + i) + 1);
    return dp[x] = res;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    recur(1);
    printf("%d", dp[1] < (1 << 30) ? dp[1] : -1);
    return 0;
}