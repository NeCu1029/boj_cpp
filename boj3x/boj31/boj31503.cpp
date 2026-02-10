#include <stdio.h>
#include <algorithm>

using namespace std;

int n, q, arr[300005], lis[300005], lds[300005], d[300005], l, a;

int main() {
    scanf("%d %d", &n, &q);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (l == 0) {
            d[l++] = arr[i];
            lis[i] = 1;
        }
        else if (d[l - 1] < arr[i]) {
            d[l++] = arr[i];
            lis[i] = l;
        }
        else {
            lis[i] = lower_bound(d, d + l, arr[i]) - d + 1;
            d[lis[i] - 1] = arr[i];
        }
    }
    for (int i = 0; i < l; i++) d[i] = 0;
    l = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (l == 0) {
            d[l++] = -arr[i];
            lds[i] = 1;
        }
        else if (d[l - 1] < -arr[i]) {
            d[l++] = -arr[i];
            lds[i] = l;
        }
        else {
            lds[i] = lower_bound(d, d + l, -arr[i]) - d + 1;
            d[lds[i] - 1] = -arr[i];
        }
    }

    while (q--) {
        scanf("%d", &a);
        printf("%d\n", lis[a - 1] + lds[a - 1] - 1);
    }
    return 0;
}