#include <stdio.h>
#include <utility>
#include <queue>

using namespace std;

int n, m, now[305][305], nxt[305][305], vis[305][305];
queue<pair<int, int>> q;

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) scanf("%d", &now[i][j]);
    }
}