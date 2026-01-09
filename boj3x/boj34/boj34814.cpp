#include <stdio.h>
#include <algorithm>

using namespace std;

int n, m, a[105], l, h, k;

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);

    while (m--) {
        scanf("%d %d", &l, &h);
        k = 0;
        for (int i = 1; i <= n; i++) k = max(k, a[i]);
        if (a[h] < k) a[l]--;
    }
    
    for (int i = 1; i <= n; i++) printf("%d ", a[i]);
    return 0;
}