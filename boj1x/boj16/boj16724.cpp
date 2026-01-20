#include <stdio.h>

int n, m, cnt, res, vis[1005][1005];
char graph[1005][1005];

void dfs(int x, int y) {
    if (vis[x][y] == cnt) {
        res++;
        return;
    } else if (vis[x][y]) return;
    vis[x][y] = cnt;

    switch (graph[x][y]) {
        case 'U':
            dfs(x - 1, y);
            break;
        case 'D':
            dfs(x + 1, y);
            break;
        case 'L':
            dfs(x, y - 1);
            break;
        case 'R':
            dfs(x, y + 1);
            break;
    }
    return;
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%s", graph[i]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cnt++;
            dfs(i, j);
        }
    }
    printf("%d", res);
    return 0;
}