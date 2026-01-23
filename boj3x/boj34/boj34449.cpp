#include <stdio.h>

double d, w, pi = 3.14159;
int n;

int main() {
    scanf("%lf %lf %d", &d, &w, &n);
    if (pi * d >= w * n) printf("YES");
    else printf("NO");
    return 0;
}