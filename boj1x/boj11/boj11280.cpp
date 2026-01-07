#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int n, m, a, b, cnt, scc[20005];
bool vis[20005];
vector<int> graph[20005], graph2[20005], stack;

void dfs(int x) {
    for (int nx: graph[x]) {
        if (vis[nx]) continue;
        vis[nx] = true;
        dfs(nx);
    }
    stack.push_back(x);
}

void dfs2(int x, int k) {
    for (int nx: graph2[x]) {
        if (scc[nx]) continue;
        scc[nx] = k;
        dfs2(nx, k);
    }
}

int main() {
    scanf("%d %d", &n, &m);
    while (m--) {
        scanf("%d %d", &a, &b);
        if (a < 0) a += 2 * n + 1;
        if (b < 0) b += 2 * n + 1;
        graph[2 * n + 1 - a].push_back(b);
        graph[2 * n + 1 - b].push_back(a);
        graph2[b].push_back(2 * n + 1 - a);
        graph2[a].push_back(2 * n + 1 - b);
    }

    for (int i = 1; i <= 2 * n; i++) {
        if (vis[i]) continue;
        vis[i] = true;
        dfs(i);
    }
    while (!stack.empty()) {
        a = stack.back();
        stack.pop_back();
        if (scc[a]) continue;
        scc[a] = ++cnt;
        dfs2(a, cnt);
    }

    for (int i = 1; i <= n; i++) {
        if (scc[i] == scc[2 * n + 1 - i]) {
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}