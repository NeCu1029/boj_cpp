#include <stdio.h>

int h1, m1, h2, m2;

int main() {
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);
    if (h1 < h2) printf("YES");
    else if (h1 > h2) printf("NO");
    else if (m1 < m2) printf("YES");
    else printf("NO");
    return 0;
}