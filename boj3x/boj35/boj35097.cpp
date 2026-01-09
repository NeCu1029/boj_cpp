#include <stdio.h>
#define ll long long

ll n, res;

int main() {
    while (true) {
        scanf("%d", &n);
        if (n == 0) break;
        res = 0;
        for (ll a = 1; a <= n; a++) {
            for (ll b = 1; b <= n; b++) res += a * b;
        }
        printf("%d\n", res);
    }
    return 0;
}