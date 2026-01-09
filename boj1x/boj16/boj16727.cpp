#include <stdio.h>

int p1, p2, s1, s2;

int main() {
    scanf("%d %d", &p1, &s1);
    scanf("%d %d", &s2, &p2);
    if (p1 + p2 > s1 + s2) printf("Persepolis");
    else if (p1 + p2 < s1 + s2) printf("Esteghlal");
    else if (p2 > s1) printf("Persepolis");
    else if (p2 < s1) printf("Esteghlal");
    else printf("Penalty");
    return 0;
}