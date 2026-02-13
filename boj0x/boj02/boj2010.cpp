#include <stdio.h>

long long int n, a, s;

int main() {
    scanf("%lld", &n);
    for (long long int i = 0; i < n; i++) {
        scanf("%lld", &a);
        s += a;
    }
    printf("%lld", s - n + 1);
    return 0;
}