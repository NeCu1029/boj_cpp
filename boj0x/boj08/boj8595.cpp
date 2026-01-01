#include <stdio.h>

int n, cur, len;
long long int res;
char s[5000005];

int main() {
    scanf("%d", &n);
    scanf("%s", s);
    for (int i = 0; i < n; i++) {
        if ('0' <= s[i] && s[i] <= '9') {
            len++;
            cur = cur * 10 + (int) (s[i] - '0');
        } else {
            if (len <= 6) res += cur;
            cur = 0;
            len = 0;
        }
    }
    if (len <= 6) res += cur;
    printf("%lld", res);
    return 0;
}