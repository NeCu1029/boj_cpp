#include <stdio.h>
#define ll long long

ll n, cur, nxt, cnt, t = 1, dt;
int l, k, p, s[1000005];

int main() {
    scanf("%lld %d %d", &n, &l, &k);
    for (int i = 0; i < k; i++) {
        scanf("%d", &p);
        s[p]++;
    }
    for (int i = 1; i <= l; i++) s[i] += s[i - 1];

    while (cur < n * l) {
        nxt = cur + t;
        dt = t / l * k;
        if (cur % l <= nxt % l) dt += s[nxt % l] - s[cur % l];
        else dt += (s[l] - s[cur % l]) + (s[nxt % l] - s[0]);
        t += dt;
        cur = nxt;
        cnt++;
    }

    printf("%lld", cnt);
    return 0;
}