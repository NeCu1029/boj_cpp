#include <stdio.h>
#define int long long

int n, a1, a2, cur, cnt, res;

signed main() {
    scanf("%lld", &n);
    scanf("%lld", &a2);

    for (int i = 0; i < n - 1; i++) {
        cur = 0;
        a1 = a2;
        scanf("%d", &a2);

        if (a1 > a2) {
            while (a1 > a2) {
                a2 <<= 1;
                cur++;
            }
        } else {
            while (a1 * 2 <= a2) {
                a1 <<= 1;
                cur--;
            }
        }

        cnt += cur;
        cnt = cnt > 0 ? cnt : 0;
        res += cnt;
        if (cur > 0) a2 >>= cur;
        else a1 >>= (-cur);
    }

    printf("%lld", res);
    return 0;
}