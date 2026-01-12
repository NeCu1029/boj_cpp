#include <stdio.h>

int n;
long long int a = 0, b = 1, tmp;

int main() {
    scanf("%d", &n);
    while (n--) {
        tmp = a;
        a = b;
        b += tmp;
    }
    printf("%lld", 2 * (a + b));
    return 0;
}