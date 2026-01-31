#include <stdio.h>
#include <algorithm>

using namespace std;

int n, s[15], b[15], cs, cb, cur, res = 1 << 30;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d %d", &s[i], &b[i]);
    for (int i = 1; i < (1 << n); i++) {
        cs = 1; cb = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                cs *= s[j];
                cb += b[j];
            }
        }
        cur = abs(cs - cb);
        res = min(res, cur);
    }
    printf("%d", res);
    return 0;
}