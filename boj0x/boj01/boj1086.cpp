#include <stdio.h>
#include <algorithm>

using namespace std;

int n, k, a, val[20][5005], l, len[20];
char arr[20][55];
long long int dp[40005][105], fac = 1, g;

long long int gcd(long long int x, long long int y) {
    long long int r;
    while (y) {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%s", arr[i]);
    scanf("%d", &k);
    for (int i = 0; i < n; i++) {
        a = 0;
        for (; arr[i][len[i]]; len[i]++) a = (a * 10 + (arr[i][len[i]] - '0')) % k;
        for (int j = 0; j <= 5000; j++) {
            val[i][j] = a;
            a = a * 10 % k;
        }
    }

    dp[0][0] = 1;
    for (int i = 1; i < (1 << n); i++) {
        l = 0;
        for (int p = 0; p < n; p++) {
            if (i & (1 << p)) l += len[p];
        }
        for (int p = 0; p < n; p++) {
            if (i & (1 << p)) {
                for (int j = 0; j < k; j++) dp[i][j] += dp[i ^ (1 << p)][(j - val[p][l - len[p]] + k) % k];
            }
        }
    }

    for (long long int i = 1; i <= n; i++) fac *= i;
    if (dp[(1 << n) - 1][0] == 0) printf("0/1");
    else {
        g = gcd(fac, dp[(1 << n) - 1][0]);
        printf("%lld/%lld", dp[(1 << n) - 1][0] / g, fac / g);
    }
    return 0;
}