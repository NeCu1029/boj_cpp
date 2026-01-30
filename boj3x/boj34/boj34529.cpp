#include <stdio.h>

long long int x, y, z, u, v, w;

int main() {
    scanf("%lld %lld %lld %lld %lld %lld", &x, &y, &z, &u, &v, &w);
    printf("%lld", x * u / 100 + y * v / 50 + z * w / 20);
    return 0;
}