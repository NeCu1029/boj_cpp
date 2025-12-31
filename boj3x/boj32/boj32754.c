#include <stdio.h>
#include <math.h>

int n, r, X1, Y1, X2, Y2, X3, Y3, X4, Y4, res;
double Xc, Yc, d1, d2;

int main() {
    scanf("%d %d", &n, &r);
    while (n--) {
        scanf("%d %d %d %d %d %d %d %d", &X1, &Y1, &X2, &Y2, &X3, &Y3, &X4, &Y4);
        Xc = (X1 + X3) / 2.0;
        Yc = (Y1 + Y3) / 2.0;
        d1 = sqrt(Xc * Xc + Yc * Yc);
        d2 = sqrt((X1 - Xc) * (X1 - Xc) + (Y1 - Yc) * (Y1 - Yc));
        res += (d1 - d2 <= r);
    }

    printf("%d", res);
    return 0;
}