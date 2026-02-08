#include <stdio.h>
#include <algorithm>

using namespace std;

int n, m;
long long int s[100005], a, l, r, mi, res;

bool f(long long int x) {
    long long int sc = 0, p;
    for (int i = 0; i < m; i++) {
        p = upper_bound(s, s + n, x) - s;
        sc += s[p - 1];
        x += s[p - 1];
    }
    return sc >= a;
}

int main() {
    scanf("%d %d %lld", &n, &m, &a);
    for (int i = 0; i < n; i++) scanf("%lld", &s[i]);
    sort(s, s + n);

    l = 1; r = s[n - 1] + 1;
    while (l <= r) {
        mi = (l + r) / 2;
        if (f(mi)) {
            res = mi;
            r = mi - 1;
        }
        else l = mi + 1;
    }
    
    for (long long int i = res;; i--) {
        if (!f(i)) {
            printf("%lld", i + 1);
            return 0;
        }
    }
}