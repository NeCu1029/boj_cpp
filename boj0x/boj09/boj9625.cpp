#include <stdio.h>

int k;
long long int a = 0, b = 1, tmp;

int main() {
    scanf("%d", &k);
    while (k-- > 1) {
        tmp = a;
        a = b;
        b += tmp;
    }
    printf("%lld %lld", a, b);
    return 0;
}