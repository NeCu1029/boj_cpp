#include <stdio.h>

long long int n;
int res;

int main() {
    scanf("%lld", &n);
    n--;
    while (n) {
        res += n % 2;
        n /= 2;
    }
    printf("%d", res % 2);
}