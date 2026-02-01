#include <stdio.h>
#include <algorithm>

using namespace std;

int n, k, t, a[100005], l, r;
long long int s, cnt;

int main() {
    scanf("%d %d %d", &n, &k, &t);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        s += a[i];
    }
    if (s % k) {
        printf("NO");
        return 0;
    }

    sort(a, a + n);
    l = 0; r = n - 1;
    while (l <= r) {
        if (a[l] == 0 && a[r] == 0) {
            printf("YES");
            return 0;
        }
        if (l == r) {
            printf("NO");
            return 0;
        } else if (a[l] + a[r] == k) {
            cnt += a[l];
            if (l + 1 == r) break;
            l++; r--;
        } else if (a[l] + a[r] < k) {
            cnt += a[l];
            a[r] += a[l++];
        } else {
            cnt += k - a[r];
            a[l] -= (k - a[r--]);
        }
    }

    if (cnt <= t) printf("YES");
    else printf("NO");
    return 0;
}