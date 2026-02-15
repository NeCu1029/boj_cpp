#include <stdio.h>
#define ll long long

int n;
ll dp[40];

ll t(int x) {
    if (x == 0) return 1ll;
    if (dp[x]) return dp[x];

    ll res = 0;
    for (int i = 0; i < x; i++) res += t(i) * t(x - i - 1);
    return dp[x] = res;
}

int main() {
    scanf("%d", &n);
    printf("%lld", t(n));
    return 0;
}