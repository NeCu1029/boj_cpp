#include <stdio.h>
#include <deque>
#include <utility>

using namespace std;

int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int n, m, graph[2005][2005], vis[2005][2005], obs, x, y, nx, ny;
pair<int, int> p;
deque<pair<int, int>> q;

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%d", &graph[i][j]);
            if (graph[i][j]) obs = 1;
            vis[i][j] = -1;
        }
    }
    if (n == 1 || m == 1) {
        printf("%d", !obs);
        return 0;
    }

    for (int i = 2; i <= m + 1; i++) q.push_back({0, i});
    for (int i = 1; i <= n - 1; i++) q.push_back({i, m + 1});

    while (!q.empty()) {
        p = q.front();
        q.pop_front();
        x = p.first; y = p.second;
        if ((x == 1 && y == 1) || (x == n && y == m)) continue;
        if (x == n || y == 1) {
            printf("%d\n", vis[x][y]);
            return 0;
        }

        for (int i = 0; i < 8; i++) {
            nx = x + dx[i]; ny = y + dy[i];
            if (nx <= 0 || nx > n || ny <= 0 || ny > m) continue;
            if (vis[nx][ny] >= 0) continue;

            vis[nx][ny] = vis[x][y] + 1 - graph[nx][ny];
            if (graph[nx][ny]) q.push_front({nx, ny});
            else q.push_back({nx, ny});
        }
    }
}