#include <stdio.h>
#include <queue>

using namespace std;

int n, k, x, nx, vis[1000005];
queue<int> q;

int main() {
    scanf("%d %d", &n, &k);
    vis[0] = 1;
    q.push(0);

    while (!q.empty()) {
        x = q.front();
        q.pop();

        nx = x + 1;
        if (nx <= n) {
            if (!vis[nx]) {
                vis[nx] = vis[x] + 1;
                q.push(nx);
            }
        }
        nx = x + x / 2;
        if (nx <= n) {
            if (!vis[nx]) {
                vis[nx] = vis[x] + 1;
                q.push(nx);
            }
        }
    }

    if (1 <= vis[n] && vis[n] <= k + 1) printf("minigimbob");
    else printf("water");
    return 0;
}