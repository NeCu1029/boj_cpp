#include <stdio.h>
#include <algorithm>

using namespace std;

long long int a, b, c;

int main() {
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld", a + b + c - min(a, min(b, c)) - max(a, max(b, c)));
    return 0;
}