#include <stdio.h>

int n, x[100005], pos[1000005], res[100005];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &x[i]);
        pos[x[i]] = i;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 2 * x[i]; j <= 1000000; j += x[i]) {
            if (pos[j]) {
                res[i]++;
                res[pos[j]]--;
            }
        }
    }

    for (int i = 1; i <= n; i++) printf("%d ", res[i]);
    return 0;
}