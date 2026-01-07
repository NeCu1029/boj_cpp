#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int v, e, a, b, cnt, scc[10005];
bool vis[10005];
vector<int> graph[10005], graph2[10005], stack, res[10005];

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

bool cmp(vector<int> x, vector<int> y) {
    return x[0] < y[0];
}

int main() {
    scanf("%d %d", &v, &e);
    while (e--) {
        scanf("%d %d", &a, &b);
        graph[a].push_back(b);
        graph2[b].push_back(a);
    }

    for (int i = 1; i <= v; i++) {
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

    for (int i = 1; i <= v; i++) res[scc[i]].push_back(i);
    sort(res + 1, res + 1 + cnt, cmp);
    printf("%d\n", cnt);
    for (int i = 1; i <= cnt; i++) {
        for (int k: res[i]) printf("%d ", k);
        printf("-1\n");
    }
    return 0;
}