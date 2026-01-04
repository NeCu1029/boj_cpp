#include <stdio.h>
#include <queue>

using namespace std;

int t, n, x, dist[4000005];
queue<int> q;

void append(int nx) {
    if (nx > 4000000 || nx <= 0) return;
    if (dist[nx]) return;
    dist[nx] = dist[x] + 1;
    q.push(nx);
}

int main() {
    q.push(1);
    dist[1] = 1;
    while (!q.empty()) {
        x = q.front();
        q.pop();
        append(2 * x);
        append(x - 1);
    }

    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        printf("%d\n", dist[n] - 1);
    }
    return 0;
}