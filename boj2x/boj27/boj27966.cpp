#include <stdio.h>

long long int n;

int main() {
    scanf("%lld", &n);
    printf("%lld\n", (n - 1) * (n - 1));
    for (long long int i = 2; i <= n; i++) printf("1 %lld\n", i);
    return 0;
}