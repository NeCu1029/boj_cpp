#include <stdio.h>
#define ll long long

int n;
ll x[100005], l = 0, r = 1000000000, v1, v2, res = 1ll << 62, cur;

ll f(ll in) {
    ll res = 0, cur;
    for (int i = 0; i < n; i++) {
        cur = x[i] - i * in;
        res += cur > 0 ? cur : -cur;
    }
    return res;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%lld", &x[i]);
    while (l + 5 < r) {
        v1 = f((2 * l + r) / 3);
        v2 = f((l + 2 * r) / 3);
        if (v1 > v2) l = (2 * l + r) / 3 - 1;
        else r = (l + 2 * r) / 3 + 1;
    }

    for (ll i = l; i <= r; i++) {
        cur = f(i);
        res = res > cur ? cur : res;
    }
    printf("%lld", res);
    return 0;
}