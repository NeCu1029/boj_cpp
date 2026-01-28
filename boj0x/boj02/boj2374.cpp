#include <stdio.h>
#include <vector>
#define ll long long int

using namespace std;

int n;
ll x, v, m, res;

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%lld", &x);
        m = m > x ? m : x;
        if (v && v < x) res += x - v;
        v = x;
    }

    printf("%lld", res + m - v);
    return 0;
}