#include <stdio.h>
#include <map>
#define ll long long 

using namespace std;

ll n, p, q, dp[5000005];

ll f(ll x) {
    if (x == 0) return 1;
    if (x > 5000000) return f(x / p) + f(x / q);
    if (dp[x]) return dp[x];
    return dp[x] = f(x / p) + f(x / q);
}

int main() {
    scanf("%lld %lld %lld", &n, &p, &q);
    printf("%lld", f(n));
    return 0;
}