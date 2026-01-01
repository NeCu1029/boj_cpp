#include <stdio.h>
#include <algorithm>

using namespace std;

int t, n, k, l, val, lis[10005];

int main() {
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        for (int j = 0; j < l; j++) lis[j] = 0;
        l = 0;

        scanf("%d %d", &n, &k);
        for (int j = 0; j < n; j++) {
            scanf("%d", &val);
            if (l == 0) lis[l++] = val;
            else if (lis[l - 1] < val) lis[l++] = val;
            else lis[lower_bound(lis, lis + l, val) - lis] = val;
        }

        printf("Case #%d\n%d\n", i, l >= k);
    }
    return 0;
}