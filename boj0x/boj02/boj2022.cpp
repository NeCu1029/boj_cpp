#include <stdio.h>
#include <math.h>

double x, y, c, l, r, m, a, b, d;

int main() {
    scanf("%lf %lf %lf", &x, &y, &c);
    l = 0;
    r = x < y ? x : y;
    while (r - l > 1e-9) {
        m = (l + r) / 2;
        a = sqrt(x * x - m * m);
        b = sqrt(y * y - m * m);
        d = (a * b) / (a + b);
        if (c < d) l = m;
        else r = m;
    }
    printf("%lf", m);
    return 0;
}