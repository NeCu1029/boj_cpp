#include <stdio.h>
#define ll long long

int t, k, chk[505][505];
ll a[505], dp[505][505];

ll f(int x, int y) {
    if (x == y) return 0;
    if (x + 1 == y) return a[y] - a[x - 1];
    if (chk[x][y]) return dp[x][y];
    chk[x][y] = 1;

    ll res = 1ll << 60ll, cur;
    for (int m = x; m < y; m++) {
        cur = f(x, m) + f(m + 1, y);
        res = res < cur ? res : cur;
    }
    return dp[x][y] = res + a[y] - a[x - 1];
}

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &k);
        for (int i = 1; i <= k; i++) {
            scanf("%lld", &a[i]);
            a[i] += a[i - 1];
        }
        printf("%lld\n", f(1, k));

        for (int i = 1; i <= k; i++) {
            for (int j = 1; j <= k; j++) chk[i][j] = 0;
        }
    }
    return 0;
}