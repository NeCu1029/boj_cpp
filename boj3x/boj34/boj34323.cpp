#include <stdio.h>
#include <algorithm>

using namespace std;

long long int n, m, s, a, b;

int main() {
    scanf("%lld %lld %lld", &n, &m, &s);
    a = m * s * 100;
    b = (m + 1) * s * (100 - n);
    printf("%lld", min(a, b) / 100);
    return 0;
}