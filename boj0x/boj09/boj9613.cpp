#include <stdio.h>
#define ll long long

int t, n;
ll arr[105], res;

ll gcd(ll a, ll b) {
    ll r;
    if (a < b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    while (b) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    scanf("%d", &t);
    while (t--) {
        res = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
            for (int j = 0; j < i; j++) res += gcd(arr[i], arr[j]);
        }
        printf("%lld\n", res);
    }
    return 0;
}