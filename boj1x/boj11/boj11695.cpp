#include <stdio.h>

int n, m;
long long int k, cur, res;

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%lld", &k);
            cur += k;
        }
        res ^= cur;
        cur = 0;
    }
    if (res) printf("august14");
    else printf("ainta");
    return 0;
}