#include <stdio.h>

int n, m, x, a[200005], b[1000005];

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) {
        b[a[i]]++;
        if (b[x] < b[a[i]]) x = a[i];
        if ((9 * m - 1) / 10 + 1 <= b[x]) {
            printf("YES");
            return 0;
        }
    }

    for (int i = m; i < n; i++) {
        b[a[i - m]]--;
        b[a[i]]++;
        if (b[x] < b[a[i]]) x = a[i];
        if ((9 * m - 1) / 10 + 1 <= b[x]) {
            printf("YES");
            return 0;
        }
    }

    printf("NO");
    return 0;
}