#include <stdio.h>
#include <math.h>

int ax, ay, bx, by, cx, cy, dx, dy;
double l = 0.0, r = 1.0, m1, m2, abx, aby, cdx, cdy, d1, d2;

int main() {
    scanf("%d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy);
    while (r - l > 1e-12) {
        m1 = (l + l + r) / 3;
        abx = ax * m1 + bx * (1 - m1);
        aby = ay * m1 + by * (1 - m1);
        cdx = cx * m1 + dx * (1 - m1);
        cdy = cy * m1 + dy * (1 - m1);
        d1 = (abx - cdx) * (abx - cdx) + (aby - cdy) * (aby - cdy);

        m2 = (l + r + r) / 3;
        abx = ax * m2 + bx * (1 - m2);
        aby = ay * m2 + by * (1 - m2);
        cdx = cx * m2 + dx * (1 - m2);
        cdy = cy * m2 + dy * (1 - m2);
        d2 = (abx - cdx) * (abx - cdx) + (aby - cdy) * (aby - cdy);

        if (d1 < d2) r = m2;
        else l = m1;
    }
    printf("%.10lf", sqrt(d1));
    return 0;
}