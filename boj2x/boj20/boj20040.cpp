#include <stdio.h>

int n, m, u, v, p[500005];

int Find(int x) {
    if (p[x] != x) p[x] = Find(p[x]);
    return p[x];
}

void Union(int a, int b) {
    a = Find(a);
    b = Find(b);
    if (a < b) p[b] = a;
    else p[a] = b;
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) p[i] = i;
    for (int i = 1; i <= m; i++) {
        scanf("%d %d", &u, &v);
        if (Find(u) == Find(v)) {
            printf("%d", i);
            return 0;
        }
        Union(u, v);
    }
    printf("0");
    return 0;
}