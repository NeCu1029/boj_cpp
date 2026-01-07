#include <stdio.h>
#include <algorithm>

using namespace std;

int n, m, k, pc, mc, res, pl[55], mi[55];

int main() {
    scanf("%d %d", &n, &m);
    while (n--) {
        scanf("%d", &k);
        if (k > 0) pl[pc++] = k;
        else mi[mc++] = -k;
    }
    sort(pl, pl + pc);
    sort(mi, mi + mc);

    for (int i = pc - 1; i >= 0; i -= m) res += pl[i];
    for (int i = mc - 1; i >= 0; i -= m) res += mi[i];
    printf("%d", res * 2 - max(pl[pc - 1], mi[mc - 1]));
    return 0;
}