#include <stdio.h>
#include <algorithm>

using namespace std;

int n, m, c, lb, res;
int a[10005], b[10005], pa[10005], pb[10005], cross[10005][2];

int main() {
    while (true) {
        c = 1;
        scanf("%d", &n);
        if (n == 0) break;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            pa[i + 1] = pa[i] + a[i];
        }
        scanf("%d", &m);
        for (int i = 0; i < m; i++) {
            scanf("%d", &b[i]);
            pb[i + 1] = pb[i] + b[i];
            lb = lower_bound(a, a + n, b[i]) - a;
            if (a[lb] == b[i]) {
                cross[c][0] = lower_bound(a, a + n, b[i]) - a;
                cross[c][1] = i;
                c++;
            }
        }
        cross[c][0] = n;
        cross[c][1] = m;

        res = 0;
        for (int i = 1; i <= c; i++) res += max(
            pa[cross[i][0]] - pa[cross[i - 1][0]],
            pb[cross[i][1]] - pb[cross[i - 1][1]]
        );
        printf("%d\n", res);
    }
    return 0;
}