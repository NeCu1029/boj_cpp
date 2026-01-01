#include <stdio.h>
#include <algorithm>

using namespace std;

int v, e, a, b, c, dist[405][405], res = 1 << 30;

int main() {
    scanf("%d %d", &v, &e);
    for (int i = 1; i <= v; i++) {
        for (int j = 1; j <= v; j++) {
            if (i != j) dist[i][j] = 1 << 29;
        }
    }
    while (e--) {
        scanf("%d %d %d", &a, &b, &c);
        dist[a][b] = min(dist[a][b], c);
    }

    for (int k = 1; k <= v; k++) {
        for (int i = 1; i <= v; i++) {
            for (int j = 1; j <= v; j++) dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
        }
    }
    for (int i = 1; i <= v; i++) {
        for (int j = 1; j <= v; j++) {
            if (i != j) res = min(res, dist[i][j] + dist[j][i]);
        }
    }

    printf("%d", res >= (1 << 29) ? -1 : res);
    return 0;
}