#include <stdio.h>
#include <algorithm>

using namespace std;

int n, kp, km;
long long int x, p[100005], m[100005], z, res;

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%lld", &x);
        if (x == 0) z++;
        else if (x == 1) res++;
        else if (x > 0) p[kp++] = -x;
        else m[km++] = x;
    }
    sort(p, p + kp);
    sort(m, m + km);

    for (int i = 0; i < kp; i += 2) res += p[i] * p[i + 1];
    for (int i = 0; i < km; i += 2) res += m[i] * m[i + 1];
    if (kp % 2) res -= p[kp - 1];
    if (km % 2 && z == 0) res += m[km - 1];
    printf("%lld", res);
    return 0;
}