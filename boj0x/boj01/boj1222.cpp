#include <stdio.h>

int n, p, a[2000005], cnt;
long long int cur, res;

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &p);
        a[p]++;
    }

    for (int i = 1; i <= 2000000; i++) {
        cnt = 0;
        for (int j = i; j <= 2000000; j += i) cnt += a[j];
        cur = (long long int) i * (long long int) cnt;
        if (cnt >= 2) res = res > cur ? res : cur;
    }
    
    printf("%lld", res);
    return 0;
}